%{
#include <stdio.h>
%}
%%
([aeiouAEIOU])[a-zA-Z]*    {
                             printf("\"%s\" starts with a vowel\n", yytext);
                           }
[a-zA-Z]+                  {
                             printf("\"%s\" does not start with a vowel\n", yytext);
                           }

[ \t\n]+                   ;   
.                          ;   
%%
int yywrap() {
    return 1;
}
int main() {
    printf("Enter words (press Ctrl+D to stop):\n");
    yylex();
    return 0;
}