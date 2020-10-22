grammar miniCgrammar;

/* ----------------------------------------- Parser Rules ----------------------------------------- */

program : declarationList EOF;

declarationList : declaration+ ;

declaration : variableDecl      # variableDeclaration
            | functionDecl      # functionDeclaration
            ;

variableDecl : dataType variableDeclList ';' ;

// variableDeclList : singleVarDecl ',' variableDeclList   # multipleCSVariables
//                  | singleVarDecl                        # singleVariable
//                  ;

variableDeclList : singleVarDecl (',' singleVarDecl)* ;

singleVarDecl : Id '[' IntegerLiteral ']' '[' IntegerLiteral']'     # twoDarray
              | Id '[' IntegerLiteral ']'                           # oneDarray
              | Id                                                  # simpleVariable
              ;

dataType : Int      # IntDataType
         | Char     # CharDataType
         | Bool     # BoolDataType
         | Long     # LongDataType
         | Uint     # UintDataType
         | Ulong    # UlongDataType
         ;

functionDecl : dataType Id '(' paramsList? ')' '{' statementList? Return expr ';' '}' ;

paramsList : (dataType Id)(',' dataType Id)* ;
 
statementList : statement+ ;

statement : variableDecl                                    # variableDeclStmt
          | <assoc=right> location assignOp expr ';'        # assignmentStmt
          | expr ';'                                        # exprStmt
          | conditionalStmt                                 # conditionStmt
          | iterativeStmt                                   # iterationStmt
          | Return expr ';'                                 # returnStmt
          | Break ';'                                       # breakStmt
          | Continue ';'                                    # continueStmt
          ;

// semantic phase: break and continue must be inside a loop

location : Id                                   # simpleVarLocation
         | Id '['arrayExpr']'                   # oneDarrayLocation
         | Id '['arrayExpr']' '['arrayExpr']'   # twoDarrayLocation
         ;

assignOp: '='       # equalAssign
        | '+='      # plusAssign
        | '-='      # minusAssign
        ;

expr: BoolLiteral                           # boolLitExpr
    | IntegerLiteral                        # intLitExpr
    | StringLiteral                         # stringLitExpr
    | CharLiteral                           # charLitExpr
    | '(' expr ')'                          # parenthesesExpr
    | location                              # locationExpr
    | functionCall                          # functionCallExpr
    | <assoc=right> '-' expr                # negateExpr
    | <assoc=right> '!' expr                # notExpr
    | <assoc=right> expr '^' expr           # exponentExpr
    | expr ('*'|'/'|'%') expr               # mulDivModExpr
    | expr ('+'|'-') expr                   # addSubExpr
    | expr ('<'|'>'|'<='|'>=') expr         # relopExpr
    | expr ('=='|'!=') expr                 # equalityExpr
    | expr '&&' expr                        # logicalANDExpr
    | expr '||' expr                        # logicalORExpr
    | <assoc=right> expr '?' expr ':' expr  # ternaryExpr
    ;

arrayExpr : IntegerLiteral                              # intLitArrayExpr
          | '(' arrayExpr ')'                           # parenthesesArrayExpr
          | location                                    # locationArrayExpr
          | functionCall                                # functionCallArrayExpr
          | '!' arrayExpr                               # notArrayExpr
          | <assoc=right> arrayExpr '^' arrayExpr       # exponentArrayExpr
          | arrayExpr ('*'|'/'|'%') arrayExpr           # mulDivModArrayExpr
          | arrayExpr ('+'|'-') arrayExpr               # addSubArrayExpr
          | arrayExpr ('<'|'>'|'<='|'>=') arrayExpr     # relopArrayExpr
          | arrayExpr ('=='|'!=') arrayExpr             # equalityArrayExpr
          | arrayExpr '&&' arrayExpr                    # logicalANDArrayExpr
          | arrayExpr '||' arrayExpr                    # logicalORArrayExpr
          ; 

functionCall: Id'(' argsList? ')'                           # userDefFnCall
            | Callout'(' StringLiteral calloutArgs? ')'     # libFnCall
            ;

argsList :  expr ( (',' expr)* ) ;

calloutArgs : (',' expr)+ ;

conditionalStmt : If '(' expr ')' '{' statementList? '}'                                # ifStmt
                | If '(' expr ')' '{' statementList? '}' Else '{' statementList? '}'    # ifElseStmt
                ;

iterativeStmt : While '(' expr ')' '{' statementList? '}'                                                       # whileStmt
              | For '(' location '=' expr ';' expr ';' location assignOp expr ')' '{' statementList? '}'        # forStmt
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
