#include <stdio.h>
#include <stdlib.h>


#define PROGRAM "#include <stdio.h>%1$c#include <stdlib.h>%1$c%1$c#define PROGRAM %3$c%4$s%3$c%1$c#define CREATE_FILE(X, I) create_file(X, I)%1$c#define X %5$i%1$c#define FILE(X) %3$cSully_%3$c #X %3$c.c%3$c%1$c#define EXEC(X) %3$cgcc -Wall -Werror -Wextra Sully_%3$c #X %3$c.c; ./Sully_%3$c #X%1$c#define FT() int main() {int i = X;if (i > 0) {CREATE_FILE(FILE(i), i);}return (0);}%1$c/*%1$c%2$cthis function create Sully children%1$c*/%1$cvoid create_file(char *s, int i) {FILE *f = fopen(s, %3$cw%3$c);char *n = PROGRAM;fprintf(f, n, 10, 9, 34, n, i-1);fclose(f);system(EXEC(i-1));}%1$c%1$cFT()%1$c%1$c"
#define CREATE_FILE(X, I) create_file(X, I)
#define X 5
#define FILE(X) "Sully_" #X ".c"
#define EXEC(X) "gcc -Wall -Werror -Wextra Sully_" #X ".c; ./Sully_" #X
#define FT() int main() {int i = X;if (i > 0) {CREATE_FILE(FILE(i), i);}return (0);}
/*
	this function create Sully children
*/
void create_file(char *s, int i) {FILE *f = fopen(s, "w");char *n = PROGRAM;fprintf(f, n, 10, 9, 34, n, i-1);fclose(f);system(EXEC(i-1));}

FT()
