#include <stdio.h>
#include "string_lib.h"
#include <stdlib.h>

int strLen(char str[]) {
    int len = 0;

    while (str[len] != '\0') {
        len++;
    }

    return len++;
}

int strVal(char str[]) {
    int i = 0, value = 0;

    while (i < strLen(str)) {
        value += str[i];
        i++;
    }

    return value;
}

int strCmp(char str1[], char str2[]) {
    int str1val = strVal(str1);
    int str2val = strVal(str2);

    if (str1val == str2val) {
        return 0;
    } else if (str1val > str2val) {
        return 1;
    } else if (str1val < str2val) {
        return -1;
    }
}

void toUpperCase(char str[]) {
    char* pstr = &str[0];
    int len = strLen(str);
    int i = 0;

    while (i < len) {
        if (pstr[i] >= 'a' && pstr[i] <= 'z') {
            pstr[i] = pstr[i] - 32;
        }
        i++;
    }
}

void copy(char destStr[], char srcStr[]) {
    char* pDestStr = &destStr[0];
    int len = strLen(destStr);
    int i = 0;

    while (i < len) {
        pDestStr[i] = srcStr[i];
        i++;
    }
}

int subStr(char destStr[], char srcStr[], int startOffs, int endOffs) {
    char* pDestStr = &destStr[0];
    int i = startOffs;

    while (i < endOffs) {
        // manualDebug:) printf("%d: von %c zu %c \n", i, destStr[i], srcStr[i-startOffs]);
        pDestStr[i] = srcStr[i-startOffs];
        i++;
    }

    return i - startOffs;
}

char* strDuplicate(const char* pSrc) {
    int len = 0;
    do {
        len++;
    } while (pSrc[len] != '\0');

    char* pDest = malloc(sizeof(char*) * len);
    if (pDest == NULL) { 
        return NULL;
    }

    pDest[len] = '\0';
    while (len != 0) {
        pDest[len-1] = pSrc[len-1];
        len--;
    }

    return pDest;
}
