#include <stdio.h>
#include <stdarg.h>

// TODO

int main(void)
{
    int n;
    printf("How many numbers would you like to enter: ");
    scanf("%d", &n);
    printf("Please enter %d numbers:\n", n);

    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // TODO

    return 0;
}