grammar Expr;

// prog: (line ';') + EOF
//     ;
prog: (declaration) + EOF
    ;

expr: '(' expr ')'
    | expr '^' expr
    | NOT expr
    | '-' expr
    | expr (DIV | MUL | MOD) expr
    | expr (ADD | SUB) expr
    | expr REL_OP expr
    | expr EQ_OP expr
    | expr AND expr
    | expr OR expr
    | expr '?' expr ':' expr
    | func_call
    | array_access
    | ID
    | literal
    ;

assign_line: ID ('['expr']')? ('['expr']')? ASSIGN_OP expr
           ;

code_block: '{' (line)* ret_line? 'Break'? 'Continue'? '}'
          ;

line: declaration
    | expr
    | for_loop
    | while_loop
    | if_condition
    | assign_line
    | stdin_line
    ;


declaration: var_def 
           | func_def
           ;

var_def: VAR_TYPE (assign_line | ID) (','(assign_line | ID))*
       | 'Array' VAR_TYPE (ID'['(INT | ID)?']'('['(INT | ID)?']')?)(',' ID'['(INT | ID)?']'('['(INT | ID)?']')?)*
       ;

func_def: 'Function' ID '(' (var_def)? ')' 'Returns' ('Void' | VAR_TYPE) code_block
        | 'Function' ID '(' (var_def)(','(var_def))* ')' 'Returns' ('Void' | VAR_TYPE) code_block
        ;

func_call: ID '(' (expr)?(','(expr))* ')'
         ;

for_loop: 'For' '(' assign_line ';' cond_line ';' assign_line ')' code_block
        ;

while_loop: 'While' '(' cond_line ')' code_block
          ;

if_condition: 'If' '(' cond_line ')' code_block ('Elif' '(' cond_line ')' code_block)* ('Else' code_block)?
            ;

cond_line: '(' cond_line ')'
         | cond_line AND cond_line
         | cond_line OR cond_line
         | expr (REL_OP | EQ_OP) expr
         | expr
         | BOOL
         ;

stdin_line: 'Printf' '(' (expr)?(','(expr))* ')'
          | 'Scanf' '(' (expr)?(','(expr))* ')'
          ;

ret_line: 'Return' expr?
        ;

array_access: ID ('[' expr ']')('[' expr ']')?
            ;

literal: INT | FLOAT | BOOL | STRING;

/*Tokens*/

VAR_TYPE: 'Int' | 'Float' | 'Bool' | 'Char';

REL_OP : '<=' | '>=' | '<' | '>';
EQ_OP : '==' | '!=';
ASSIGN_OP : '=' | '+=' | '-=' | '*=' | '/=' | '^=';

NOT : 'Not';
AND : 'And';
OR : 'Or';

ADD : '+';
SUB : '-';
MUL : '*';
DIV : '/';
MOD : '%';

ID  : [a-zA-Z][a-zA-Z0-9_]*;
BOOL : 'True' | 'False' ;
FLOAT : [0-9]+'.'[0-9]* | '.'[0-9]+;
INT : [0-9]+;
STRING : '"' ~('"')* '"';


COMMENT : '//' ~[\r\n]*->skip; 
NS : [ \t\n]+ -> skip; 