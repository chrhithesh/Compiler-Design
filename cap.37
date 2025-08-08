%{
 int max_len = 0;
%}
%%
[a-zA-Z]+ {
 if (yyleng > max_len) {
 max_len = yyleng;
 }
}
%%
int yywrap()
{}
int main() {
 printf("enter the word\n");
 yylex();
 printf("Length of longest word: %d\n", max_len);
 return 0;
}