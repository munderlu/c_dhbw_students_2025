
// TODO
#include <stdbool.h>
#include <stdio.h>

bool stringStartsWith(char *string, char *substr){
    int i=0, j=0;
    while(substr[j] != '\0'){
        if(string[i] == '\0') return false;
        if(string[i] != substr[j]) return false;
        i++; j++;
    }
    return true;
}

bool stringEndsWith(char *string, char *substr){
    int nString = 0, nSubStr = 0;
    while(string[nString] != '\0') nString++;
    while(substr[nSubStr] != '\0') nSubStr++;

    if(nSubStr > nString) return false;

    int i=nString - 1, j=nSubStr - 1;
    while(j >= 0){
        if(string[i] != substr[j]) return false;
        i--; j--;
    }

    return true;
}

char *stringFindFirstNotOf(char *string, char *substr){
    int nString = 0, nSubStr = 0;
    while(string[nString] != '\0') nString++;
    while(substr[nSubStr] != '\0') nSubStr++;

    int position = 0;

    if(!stringStartsWith(string, substr)) return NULL;

    while (position <= nString && stringStartsWith(string+position*sizeof(char), substr)){
        position += nSubStr;
    }

    if (position >= nString) return NULL;
    return &string[position];
}
