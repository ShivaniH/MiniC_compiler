grammar miniCgrammar;

/* ----------------------------------------- Parser Rules ----------------------------------------- */

program : declarationList EOF;

declarationList : declaration+ ;

declaration : variableDecl      # variableDeclaration
            | functionDecl      # functionDeclaration
            ;

variableDecl : dataType variableDeclList ';' ;

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

statement : variableDecl                                                # variableDeclStmt
          | <assoc=right> location op=('='|'+='|'-=') expr ';'          # assignmentStmt
          | expr ';'                                                    # exprStmt
          | conditionalStmt                                             # conditionStmt
          | iterativeStmt                                               # iterationStmt
          | Return expr ';'                                             # returnStmt
          | Break ';'                                                   # breakStmt
          | Continue ';'                                                # continueStmt
          ;

location : Id                                   # simpleVarLocation
         | Id '['expr']'                        # oneDarrayLocation
         | Id '['expr']''['expr']'              # twoDarrayLocation
         ;

expr: BoolLiteral                               # boolLitExpr
    | IntegerLiteral                            # intLitExpr
    | StringLiteral                             # stringLitExpr
    | CharLiteral                               # charLitExpr
    | '(' expr ')'                              # parenthesesExpr
    | location                                  # locationExpr
    | functionCall                              # functionCallExpr
    | <assoc=right> '-' expr                    # negateExpr
    | <assoc=right> '!' expr                    # notExpr
    | <assoc=right> expr '^' expr               # exponentExpr
    | expr op=('*'|'/'|'%') expr                # mulDivModExpr
    | expr op=('+'|'-') expr                    # addSubExpr
    | expr op=('<'|'>'|'<='|'>=') expr          # relopExpr
    | expr op=('=='|'!=') expr                  # equalityExpr
    | expr '&&' expr                            # logicalANDExpr
    | expr '||' expr                            # logicalORExpr
    | <assoc=right> expr '?' expr ':' expr      # ternaryExpr
    ;

functionCall: Id'(' argsList? ')'                           # userDefFnCall
            | Callout'(' StringLiteral calloutArgs? ')'     # libFnCall
            ;

argsList :  expr ( (',' expr)* ) ;

calloutArgs : (',' expr)+ ;

conditionalStmt : If '(' expr ')' '{' statementList? '}'                                # ifStmt
                | If '(' expr ')' '{' statementList? '}' Else '{' statementList? '}'    # ifElseStmt
                ;

iterativeStmt : While '(' expr ')' '{' statementList? '}'                                                                 # whileStmt
              | For '(' location '=' expr ';' expr ';' location op=('='|'+='|'-=') expr ')' '{' statementList? '}'        # forStmt
              ;

/* ----------------------------------------- Lexer Rules ----------------------------------------- */

BoolLiteral : True | False ;    // This needs to be here so that return true and return false are recognized correctly

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

IntegerLiteral : [0-9]+ ;

Id : [A-Za-z_][0-9A-Za-z_]* ;

Newline : ( '\r' '\n'?
          | '\n'
          )
          -> skip
        ;
Whitespace : [ \t]+ -> skip ;
Comment : '//' ~[\r\n]* -> skip ; 
BlockComment : '/*' .*? '*/' -> skip ;
