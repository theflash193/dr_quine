#include <stdio.h>

#define PROGRAM "#include <stdio.h>%1$c%1$c#define PROGRAM %3$c%4$s%3$c%1$c#define CREATE_FILE(X) create_file(X)%1$c#define FT() int main() {CREATE_FILE(%3$cGrace_kid.c%3$c);return (0);}%1$c/*%1$c%2$cthis function create children child%1$c*/%1$cvoid create_file(char *s) {FILE *f = fopen(s, %3$cw%3$c);char *n = PROGRAM;fprintf(f, n, 10, 9, 34, n);fclose(f);}%1$c%1$cFT()%1$c"
#define CREATE_FILE(X) create_file(X)
#define FT() int main() {CREATE_FILE("Grace_kid.c");return (0);}
/*
	this function create children child
*/
void create_file(char *s) {FILE *f = fopen(s, "w");char *n = PROGRAM;fprintf(f, n, 10, 9, 34, n);fclose(f);}

FT()
