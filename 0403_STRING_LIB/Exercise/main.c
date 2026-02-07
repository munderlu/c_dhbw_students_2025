#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "lib.h"

void performTestCases();

int main()
{

    // TODO
    performTestCases();
    printf("Tests bestanden\n");
    return 0;
}

void performTestCases()
{
    assert(stringEndsWith("anna", "a") == true);
    assert(stringEndsWith("anna", "na") == true);
    assert(stringEndsWith("anna", "ann") == false);

    assert(stringStartsWith("anna", "a") == true);
    assert(stringStartsWith("anna", "na") == false);
    assert(stringStartsWith("anna", "ann") == true);

    assert(stringFindFirstNotOf("banbanana", "ban") == &("banbanana"[6]));
    assert(stringFindFirstNotOf("aaaaaa", "a") == NULL);
    assert(stringStartsWith("a", "aa") == false);
    assert(stringEndsWith("a", "aa") == false);
    assert(stringFindFirstNotOf("banbanX", "ban") == &("banbanX"[6]));
}
