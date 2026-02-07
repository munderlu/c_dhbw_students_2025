#include <stdio.h>
#include <stdarg.h>

int addieren (int n, ...){
    int summe = 0;
    if (n <= 0) return 0;
    va_list list;
    va_start(list, n);
    for (int i = 0; i < n; i++)
    {
        int tmp = va_arg(list, int);
        summe += tmp;
    }
    va_end(list);
    return summe;
}

int main(){
    printf("Die Summe von 4, 4, 5: %d\n", addieren(4, 4, 4, 5, 10));
}