#include <stdbool.h>
#include <stdio.h>

int main()
{
    char character;

    printf("Please enter any ASCII character: ");
    scanf("%c", &character);

    // is numeric
    if(character - 0x30 < 10){
        printf("Es handelt sich bei %c um eine Zahl\n", character);
    }

    // is upper case

    // is lower case

    // is alpha

    // is alpha numeric

    // to upper case

    // to lower case

    return 0;
}