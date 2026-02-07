#ifndef LIB_H
#define LIB_H
#include <stdbool.h>

// TODO
bool stringStartsWith(char *string, char *substr);

bool stringEndsWith(char *string, char *substr);

char *stringFindFirstNotOf(char *string, char *substr);
#endif