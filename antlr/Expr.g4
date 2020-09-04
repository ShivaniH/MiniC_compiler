grammar Expr;

prog: (statement ';') + EOF
    ;

statement: ID assignOp expr
         | expr
         ;

assignOp: '='
        | '+='
        | '-='
        ;

expr: ID
    | INT
    | FLOAT
    | '(' expr ')'
    | methodCall
    | '-' expr
    | '!' expr
    | expr ('*'|'/'|'%') expr
    | expr ('+'|'-') expr
    | expr ('<'|'>'|'<='|'>=') expr
    | expr ('=='|'!=') expr
    | expr '&&' expr
    | expr '||' expr
    ;


methodCall: ID'('(expr ','?)*')';

/*Tokens*/

ID  : [a-zA-Z_][a-zA-Z0-9_]* ;
INT : [+-]?[0-9]+ ;
FLOAT: [+-]?[0-9]+.[0-9]+ ;
COMMENT : '//' ~[\r\n]*->skip; 
NS : [ \t\n]+ -> skip; 