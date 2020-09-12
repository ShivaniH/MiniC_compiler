grammar miniCgrammar;

/* ----------------------------------------- Parser Rules ----------------------------------------- */

program : declarationList EOF;

declarationList : declaration declarationList
                | declaration
                ;

declaration : variableDecl
            | functionDecl  
            ;

variableDecl : dataType variableDeclList ';' ;

variableDeclList : singleVarDecl ',' variableDeclList
                 | singleVarDecl
                 ;

singleVarDecl : Id '[' IntegerLiteral ']' '[' IntegerLiteral']'
              | Id '[' IntegerLiteral ']'
              | Id
              ;

dataType : Int
         | Char
         | Bool
         | Long
         | Uint
         | Ulong
         ;

functionDecl : dataType Id '(' paramsList? ')' '{' statementList? Return expr ';' '}' ;

paramsList : (dataType Id)(',' dataType Id)* ;

statementList : statement statementList | statement ;

statement : variableDecl
          | location assignOp expr ';'
          | expr ';'   
          | conditionalStmt
          | iterativeStmt
          | Return expr ';'
          | Break ';'           // semantic phase: break and continue must be inside a loop
          | Continue ';'
          ;

location : Id
         | Id '['arrayExpr']'
         | Id '['arrayExpr']' '['arrayExpr']'
         ;

assignOp: '='
        | '+='
        | '-='
        ;

expr: BoolLiteral
    | IntegerLiteral
    | StringLiteral
    | CharLiteral
    | '(' expr ')'
    | location
    | functionCall
    | '-' expr
    | '!' expr
    | <assoc=right> expr '^' expr
    | expr ('*'|'/'|'%') expr
    | expr ('+'|'-') expr
    | expr ('<'|'>'|'<='|'>=') expr
    | expr ('=='|'!=') expr
    | expr '&&' expr
    | expr '||' expr
    | expr '?' expr ':' expr
    ;

arrayExpr : IntegerLiteral
          | '(' arrayExpr ')'
          | location
          | functionCall
          | '!' arrayExpr
          | <assoc=right> arrayExpr '^' arrayExpr
          | arrayExpr ('*'|'/'|'%') arrayExpr
          | arrayExpr ('+'|'-') arrayExpr
          | arrayExpr ('<'|'>'|'<='|'>=') arrayExpr
          | arrayExpr ('=='|'!=') arrayExpr
          | arrayExpr '&&' arrayExpr
          | arrayExpr '||' arrayExpr
          ; 

functionCall: Id'(' argsList? ')'
            | Callout'(' StringLiteral calloutArgs? ')'
            ;

argsList :  expr ( (',' expr)* ) ;

calloutArgs : (',' expr)+ ;

conditionalStmt : If '(' expr ')' '{' statementList? '}' 
                | If '(' expr ')' '{' statementList? '}' Else '{' statementList? '}'
                ;

iterativeStmt : While '(' expr ')' '{' statementList? '}' 
              | For '(' location '=' expr ';' expr ';' location assignOp expr ')' '{' statementList? '}' 
              ;


/* ----------------------------------------- Lexer Rules ----------------------------------------- */

Bool : 'bool';
Break : 'break';
Callout : 'callout';
Char : 'char';
Continue : 'continue';
Else : 'else';
False : 'false';
Float : 'float';
For : 'for';
If : 'if';
Int : 'int';
Long : 'long';
Return : 'return';
True : 'true';
Uint : 'uint';
Ulong : 'ulong';
While : 'while';

LeftParen : '(';
RightParen : ')';
LeftBracket : '[';
RightBracket : ']';
LeftBrace : '{';
RightBrace : '}';

Less : '<';
LessEqual : '<=';
Greater : '>';
GreaterEqual : '>=';

Plus : '+';
Minus : '-';
Star : '*';
Div : '/';
Mod : '%';
Caret : '^';

And : '&&';
Or : '||';
Not : '!';

Question : '?';
Colon : ':';
Semi : ';';
Comma : ',';
SingleQuote : '\'';
DoubleQuote : '"';

Assign : '=';
PlusAssign : '+=';
MinusAssign : '-=';

Equal : '==';
NotEqual : '!=';


CharLiteral : '\'' (~['\r\n"\\] | '\\' ['"nrt0\\]) '\'' ;

StringLiteral : '"' (~['\r\n"]('\\'['"nrt\\])?)* '"' ;

BoolLiteral : True | False ;

IntegerLiteral : [0-9]+ ;

Id : [A-Za-z_][0-9A-Za-z_]* ;

/*
Distinguishing between signed and unsigned integer literals caused the wrong token to be returned in many situations, too problematic

So, instead using just IntegerLiteral
*/

Newline : ( '\r' '\n'?
          | '\n'
          )
          -> skip
        ;
Whitespace : [ \t]+ -> skip ; 
Comment : '//' ~[\r\n]* -> skip ; 
BlockComment : '/*' .*? '*/' -> skip ;
