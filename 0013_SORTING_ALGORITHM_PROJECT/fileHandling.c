#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *file = fopen("../file.txt", "r");
    char buffer [255];
    while(fgets(buffer, 255, file) != NULL)
        printf("%s", buffer);
    fclose(file);
}