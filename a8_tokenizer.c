#include<stdio.h>

#define MAX_LEN 32

int *tokenize_index(char*);
int *tokenize_adr(char*);

void main() {
    char text[MAX_LEN] = "Dies ist ein Probetext";
    printf("%s\n", text);

    int *indexes = tokenize_index(text);
    int *addresses = tokenize_adr(text);

    int i = 0;
    for (i=0; i<MAX_LEN; i++) {
        if (addresses[i] != 0) {
            printf("index: %d  address: 0x%d\n", indexes[i], addresses[i]);
        }
    }
}

int *tokenize_index(char *text) {
    static int indexes[MAX_LEN];
    int i = 0, indexes_i = 0;

    while (i<MAX_LEN) {
        if (i == 0 || text[i-1] == ' ') {
            indexes[indexes_i] = i;
            indexes_i++;
        }
        i++;
    }
    return indexes;
}

int *tokenize_adr(char *text) {
    static int addresses[MAX_LEN];
    int i = 0, adrs_i = 0;

    while (i<MAX_LEN) {
        if (i == 0 || text[i-1] == ' ') {
            addresses[adrs_i] = (int)&text[i];
            adrs_i++;
        }
        i++;
    }
    return addresses;
}
