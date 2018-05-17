#include <stdio.h>
/*
	this function return 40
*/
int hello(){int i = 32 + 8;return (i);}
int main() {
/*
	main programme
*/
char *s="#include <stdio.h>%1$c/*%1$c%2$cthis function return 40%1$c*/%1$cint hello(){int i = 32 + 8;return (i);}%1$cint main() {%1$c/*%1$c%2$cmain programme%1$c*/%1$cchar *s=%3$c%4$s%3$c;%1$cprintf(s, 10, 9, 34, s, 10);return (0);}%5$c";
printf(s, 10, 9, 34, s, 10);return (0);}
