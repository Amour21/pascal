project(libantlr4)
# Переопределяем опции, чтобы убрать конфликты целей в Visual Studio
set(ANTLR_BUILD_CPP_TESTS OFF CACHE BOOL "Build C++ tests." FORCE)
set(TRACE_ATN OFF CACHE BOOL "Trace ATN simulation" FORCE)
set(ANTLR_BUILD_SHARED OFF CACHE BOOL "Build the shared library of the ANTLR runtime" FORCE)
set(ANTLR_BUILD_STATIC ON CACHE BOOL "Build the static library of the ANTLR runtime" FORCE)

set(libantlrcpp_INCLUDE_INSTALL_DIR "include/antlr4-runtime")

# Исправленные пути: убрано несуществующее слово "runtime/" из путей
set(libantlrcpp_INCLUDE_DIRS
  ${PROJECT_SOURCE_DIR}/src
  ${PROJECT_SOURCE_DIR}/src/atn
  ${PROJECT_SOURCE_DIR}/src/dfa
  ${PROJECT_SOURCE_DIR}/src/internal
  ${PROJECT_SOURCE_DIR}/src/misc
  ${PROJECT_SOURCE_DIR}/src/support
  ${PROJECT_SOURCE_DIR}/src/tree
  ${PROJECT_SOURCE_DIR}/src/tree/pattern
  ${PROJECT_SOURCE_DIR}/src/tree/xpath
)

# Исправленный поиск файлов: ищем исходники напрямую в src/
file(GLOB libantlrcpp_SRC
  "${PROJECT_SOURCE_DIR}/src/*.cpp"
  "${PROJECT_SOURCE_DIR}/src/atn/*.cpp"
  "${PROJECT_SOURCE_DIR}/src/dfa/*.cpp"
  "${PROJECT_SOURCE_DIR}/src/internal/*.cpp"
  "${PROJECT_SOURCE_DIR}/src/misc/*.cpp"
  "${PROJECT_SOURCE_DIR}/src/support/*.cpp"
  "${PROJECT_SOURCE_DIR}/src/tree/*.cpp"
  "${PROJECT_SOURCE_DIR}/src/tree/pattern/*.cpp"
  "${PROJECT_SOURCE_DIR}/src/tree/xpath/*.cpp"
)

if (ANTLR_BUILD_SHARED)
  add_library(antlr4_shared SHARED ${libantlrcpp_SRC})
  target_include_directories(antlr4_shared PUBLIC 
    "$<BUILD_INTERFACE:${libantlrcpp_INCLUDE_DIRS}>" 
    "$<INSTALL_INTERFACE:${libantlrcpp_INCLUDE_INSTALL_DIR}>")
endif()

if (ANTLR_BUILD_STATIC)
  add_library(antlr4_static STATIC ${libantlrcpp_SRC})
  target_include_directories(antlr4_static PUBLIC 
    "$<BUILD_INTERFACE:${libantlrcpp_INCLUDE_DIRS}>" 
    "$<INSTALL_INTERFACE:${libantlrcpp_INCLUDE_INSTALL_DIR}>")
endif()

if (CMAKE_HOST_UNIX)
  find_package(Threads REQUIRED)
  if (TARGET antlr4_shared)
    target_link_libraries(antlr4_shared Threads::Threads)
  endif()
  if (TARGET antlr4_static)
    target_link_libraries(antlr4_static Threads::Threads)
  endif()
endif()

IF(TRACE_ATN)
    ADD_DEFINITIONS(-DTRACE_ATN_SIM=1)
ENDIF(TRACE_ATN)

if(APPLE)
  if (TARGET antlr4_shared)
    target_link_libraries(antlr4_shared ${COREFOUNDATION_LIBRARY})
  endif()
  if (TARGET antlr4_static)
    target_link_libraries(antlr4_static ${COREFOUNDATION_LIBRARY})
  endif()
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  set(disabled_compile_warnings "/wd4251")
else()
  set(disabled_compile_warnings "-Wno-overloaded-virtual")
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  set(disabled_compile_warnings "${disabled_compile_warnings} -Wno-dollar-in-identifier-extension -Wno-four-char-constants")
elseif(CMAKE_CXX_COMPILER_ID MATCHES "GNU" OR CMAKE_CXX_COMPILER_ID MATCHES "Intel")
  set(disabled_compile_warnings "${disabled_compile_warnings} -Wno-multichar")
endif()

set(extra_share_compile_flags "")
set(extra_static_compile_flags "")
set(static_lib_suffix "")

if (WIN32)
  set(static_lib_suffix "-static")
  if (TARGET antlr4_shared)
    target_compile_definitions(antlr4_shared PUBLIC ANTLR4CPP_EXPORTS)
  endif()
  if (TARGET antlr4_static)
    target_compile_definitions(antlr4_static PUBLIC ANTLR4CPP_STATIC)
  endif()
  if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    set(extra_share_compile_flags "-MP /wd4251")
    set(extra_static_compile_flags "-MP")
  endif()
endif()

if (TARGET antlr4_shared)
  set_target_properties(antlr4_shared
                        PROPERTIES VERSION   "${ANTLR_VERSION}"
                                   SOVERSION "${ANTLR_VERSION}"
                                   OUTPUT_NAME antlr4-runtime
                                   COMPILE_FLAGS "${disabled_compile_warnings} ${extra_share_compile_flags}")
endif()

if (TARGET antlr4_static)
  set_target_properties(antlr4_static
                        PROPERTIES VERSION   "${ANTLR_VERSION}"
                                   SOVERSION "${ANTLR_VERSION}"
                                   OUTPUT_NAME "antlr4-runtime${static_lib_suffix}"
                                   COMPILE_PDB_NAME "antlr4-runtime${static_lib_suffix}"
                                   COMPILE_FLAGS "${disabled_compile_warnings} ${extra_static_compile_flags}")
endif()

if (TARGET antlr4_shared)
  install(TARGETS antlr4_shared
          EXPORT antlr4-targets
          ARCHIVE DESTINATION lib
          LIBRARY DESTINATION lib
          RUNTIME DESTINATION bin)
endif()

if (TARGET antlr4_static)
  install(TARGETS antlr4_static
          EXPORT antlr4-targets
          ARCHIVE DESTINATION lib
          LIBRARY DESTINATION lib
          RUNTIME DESTINATION bin)
endif()

install(DIRECTORY "${PROJECT_SOURCE_DIR}/src/"
        DESTINATION "${libantlrcpp_INCLUDE_INSTALL_DIR}"
        COMPONENT dev
        FILES_MATCHING PATTERN "*.h"
)