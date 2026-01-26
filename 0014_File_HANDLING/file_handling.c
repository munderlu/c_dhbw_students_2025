#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int is_ok = EXIT_FAILURE;
    FILE* fp = fopen("test.txt", "w+");
    if (!fp)
    {
        perror("File opening failed");
        return is_ok;
    }
 
    int c; // Note: int, not char, required to handle EOF
    while ((c = fgetc(fp)) != EOF) // Standard C I/O file reading loop
        putchar(c);
 
    if (ferror(fp))
        puts("I/O error when reading");
    else if (feof(fp))
    {
        puts("End of file reached successfully");
        is_ok = EXIT_SUCCESS;
    }
 
    fclose(fp);
    return is_ok;
}