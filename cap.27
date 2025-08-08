%{
%}
%%
bool|int|float|main|printf|switch|while|if|return {printf("\n%s is a Keyword",yytext);}
[0-9]+ {printf("\n%s is a Integer",yytext);}
[,.'";:(){}[]]+ {printf("\n%s is a Punctuation Chars",yytext);}
[a-zA-Z]+ {printf("\n%s is a Identifiers",yytext);}
[<>+-/*==]+ {printf("\n%s is operator",yytext);}
%%
int yywrap()
{}
int main()
{
printf("enter input");
yylex();
}