#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "lib.h"

void performeTestCases();

int main()
{

    // TODO

    return 0;
}

void performeTestCases()
{
    assert(stringEndsWith("anna", "a") == true);
    assert(stringEndsWith("anna", "na") == true);
    assert(stringEndsWith("anna", "ann") == false);

    assert(stringStartsWith("anna", "a") == true);
    assert(stringStartsWith("anna", "na") == false);
    assert(stringStartsWith("anna", "ann") == true);

    assert(stringFindFirstNotOf("banana", "ban") == &("banana"[3]));
    assert(stringFindFirstNotOf("aaaaaa", "a") == NULL);
}
