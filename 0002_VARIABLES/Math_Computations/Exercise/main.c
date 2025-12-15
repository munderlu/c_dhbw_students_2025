#include <stdio.h>

int main()
{
    // variables
    int x = -2;
    int y = -3;
    int z1 = x*x + y*y - x*y +2;
    int z2 = (x-y)*(x-y)*(x-y) -3;
    float z3 = (2*x*x*x - 0.5*x*x - x +4)/y;

    // output
    printf("z1 = %d\n", z1);
    printf("z2 = %d\n", z2);
    printf("z3 = %f\n", z3);

    return 0;
}






















