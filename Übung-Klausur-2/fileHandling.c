#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("test.txt", "w");
    if (file == NULL) {
        return 1;
    }
    char string[] = "Hallo";
    fprintf(file, "%s", string);
    return 0;
}
