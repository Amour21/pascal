grammar PascalLite;

program : stat+ ;

stat: assignment ';'
    | ifStat
    | whileStat
    | block
    | writeStat ';'
    ;

assignment : ID ':=' expr ;

ifStat : 'if' '(' expr ')' 'then' stat ('else' stat)? ;

whileStat : 'while' '(' expr ')' 'do' stat ;

block : 'begin' stat+ 'end' ;

writeStat : 'write' '(' expr ')' ;

expr: expr op=('*'|'/') expr   # MulDiv
    | expr op=('+'|'-') expr   # AddSub
    | expr op=('<'|'>'|'==') expr # Compare
    | INT                      # Number
    | ID                       # Variable
    | '(' expr ')'             # Parens
    ;

INT  : [0-9]+ ;
ID   : [a-zA-Z_][a-zA-Z0-9_]* ;
WS   : [ \t\r\n]+ -> skip ;  