#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PROGRAM "#include <stdio.h>%1$c#include <stdlib.h>%1$c%1$c#define PROGRAM %3$c%5$s%3$c%1$cvoid create_file(int i) {char s[40];sprintf(s, %3$cSully_%d.c\", i);FILE *f = fopen(s, \"w\");char s1[70];sprintf(s1, \"gcc -Wall -Werror -Wextra Sully_%1$d;./Sully_%1$d%3$c, i);char *n = PROGRAM;"
void create_file(int i) {
char s[40];
sprintf(s, "Sully_%d.c", i);
FILE *f = fopen(s, "w");
char s1[70];
sprintf(s1, "gcc -Wall -Werror -Wextra Sully_%1$d;./Sully_%1$d", i);
char *n = PROGRAM;
fprintf(f, n, 10, 9, 34, i, n);
fclose(f);
system(s1);
}
int main() {int i = 5;if (i > 0) {create_file(i);}return (0);}
