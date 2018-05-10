#include <stdio.h>
#include <stdlib.h

#define PROGRAM "#include <stdio.h>%1$c#include <stdlib.h%1$c%1$c#define PROGRAM %3$c%5$s%3$c%1$cvoid create_file(int i) {char s[40];sprintf(s, %3$cSully_%d.c%3$c, i);"
void create_file(int i) {char s[40];sprintf(s, "Sully_5.c", i);