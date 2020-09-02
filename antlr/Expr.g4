grammar Expr;

prog: (expr ';') + EOF
    ;


expr: '-' expr
    | '!' expr
    | expr ('*'|'/'|'%') expr
    | expr ('+'|'-') expr
    | expr ('<'|'>'|'<='|'>=') expr
    | expr ('=='|'!=') expr
    | expr '&&' expr
    | expr '||' expr
    | ID
    | INT
    | FLOAT
    ;


/*Tokens*/

ID  : [a-zA-Z_][a-zA-Z0-9_]* ;
INT : [+-]?[0-9]+ ;
FLOAT: [+-]?[0-9]+.[0-9]+ ;
COMMENT : '//' ~[\r\n]*->skip; 
NS : [ \t\n]+ -> skip; 