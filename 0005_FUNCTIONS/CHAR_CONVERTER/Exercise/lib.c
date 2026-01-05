#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

bool isNumeric(char character)
{
    if ((character >= '0') && (character <= '9'))
    {
        return true;
    };

    return false;
}

bool isUpperCase(char character)
{
    if ((character >= 'A') && (character <= 'Z'))
    {
        return true;
    };

    return false;
}

bool isLowerCase(char character)
{
    if ((character >= 'a') && (character <= 'z'))
    {
        return true;
    };

    return false;
}

bool isAlpha(char character)
{
    if (isUpperCase(character) || isLowerCase(character))
    {
        return true;
    };

    return false;
}

bool isAlphaNumeric(char character)
{
    if (isAlpha(character) || isNumeric(character))
    {
        return true;
    };

    return false;
}

char toUpperCase(char character)
{
    if (isLowerCase(character))
    {
        return character - 32;
    };

    return character;
}

char toLowerCase(char character)
{
    if (isUpperCase(character))
    {
        return character + 32;
    };

    return character;
}
