%{
%}
%%
[0-9]        { printf("'%s' is a digit.\n", yytext); }
[A-Za-z]+    { printf("'%s' is a letter, not a digit.\n", yytext); }
[ \t\n]+     {  }
.            { printf("'%s' is not a digit.\n", yytext); }
%%
int main() {
    printf("Enter characters (Ctrl+D to end):\n");
    yylex();
    return 0;
}
int yywrap() {
    return 1;
}