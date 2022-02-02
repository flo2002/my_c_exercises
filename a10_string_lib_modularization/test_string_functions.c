#include <stdio.h>
#include "string_lib.h"
#include <stdlib.h>

void main() {
    char str[] = "Dieses da ist es";
    char str1[] = "asdf1";
    char str2[] = "asdf";

    // string length
    printf("Length: %d \n\n", strLen(str));

    // string compare
    printf("StringCompare: %d \n\n", strCmp(str1, str2));

    // to upper case
    toUpperCase(str);
    int i = 0;
    while (i < strLen(str)) {
        printf("%c", str[i]);
        i++;
    }
    printf("\n\n");

    // copy
    char cStr[] = "Dis blada ist es";
    copy(str, cStr);
    i = 0;
    while (i < strLen(str)) {
        printf("%c", str[i]);
        i++;
    }
    printf("\n\n");

    // subStr
    int startOffs = 2, endOffs = 7;
    char srcStr[] = "eses ";
    int num = subStr(str, srcStr, startOffs, endOffs);
    printf("%s\n", str);
    printf("Kopierte Zeichen: %d\n\n", num);

    // strDuplicate
    char *newStr = strDuplicate(str);
    printf("%s \n", newStr);
    free(newStr);
}

