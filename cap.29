%{
%}
%%
if|else|while|switch|int|char|float|strlen {printf("\n KEYWORD\n");}
[a-zA-Z][a-zA-Z0-9]* {printf("\n IDENTIFIER\n");}
%%
int yywrap()
{}
int main()
{
  printf("enter the input");
  yylex();
  printf("\n");
}