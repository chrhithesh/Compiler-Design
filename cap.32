%{
%}
%%
[http://]+[www.]+[a-zA-Z0-9/-]+".com" {printf("valid url\n");}
.+ {printf("invalid url\n");}
%%
int yywrap()
{}
int main()
{
  printf("enter url\n");
  yylex();
}