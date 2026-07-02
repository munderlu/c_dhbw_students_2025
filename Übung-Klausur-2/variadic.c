#include <stdarg.h>
#include <stdio.h>

void print(int n, ...) {
    va_list args;
    va_start(args, n);
    for (int i = 0; i < n; i++) {
        printf("%d", va_arg(args, int));
    }
    va_end(args);
}

int main() { print(4, 3, 2, 1, 5); }
