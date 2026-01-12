#include <stdio.h>

union FloatUnion 
{
    float f;
    unsigned char bytes[sizeof(float)]; // 4 bytes in a float
};

void printBits(unsigned char byte) 
{
    for (int i = 7; i >= 0; i--) // looping through the 8 bits of a byte: Hier wird durch die Bytes der union von hinten (höchstwertiges Byte) nach vorne (niederwertiges Byte) iteriert.
    {
        printf("%d", (byte >> i) & 1); // Shift the byte i positions to the right and then bitwise AND with 1
    }
}

int main() 
{
    union FloatUnion myUnion;
    printf("Enter a float number: ");
    scanf("%f", &myUnion.f);

    printf("Bits of the float number:\n");
    for (int i = sizeof(float) - 1; i >= 0; i--) // looping through the 4 bytes of a float
    {
        printBits(myUnion.bytes[i]);
        if (i > 0) 
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}