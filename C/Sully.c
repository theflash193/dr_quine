#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PROGRAM "#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <string.h>%1$c%1$c#define PROGRAM %3$c%6$s%3$c%1$cvoid create_file(int i) {char s[40];sprintf(s, %3$cSully_%5$cd.c%3$c, i);FILE *f = fopen(s, %3$cw%3$c);char s1[70];if (i > 0) {sprintf(s1, %3$cgcc -Wall -Werror -Wextra Sully_%5$cd.c -o Sully_%5$cd;./Sully_%5$cd%3$c, i, i, i);} else {sprintf(s1, %3$cgcc -Wall -Werror -Wextra Sully_%5$cd.c -o Sully_%5$cd;%3$c, i, i);}char *n = PROGRAM;fprintf(f, n, 10, 9, 34, (i-1), 37, n);fclose(f);system(s1);}%1$cint main() {int i = %4$d;create_file(i);return (0);}%1$c"
void create_file(int i) {char s[40];sprintf(s, "Sully_%d.c", i);FILE *f = fopen(s, "w");char s1[70];if (i > 0) {sprintf(s1, "gcc -Wall -Werror -Wextra Sully_%d.c -o Sully_%d;./Sully_%d", i, i, i);} else {sprintf(s1, "gcc -Wall -Werror -Wextra Sully_%d.c -o Sully_%d;", i, i);}char *n = PROGRAM;fprintf(f, n, 10, 9, 34, i-1, 37, n);fclose(f);system(s1);}
int main() {int i = 5;create_file(i);return (0);}
