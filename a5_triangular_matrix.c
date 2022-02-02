#include<stdio.h>

int main() {
    int n = 20;
    int i;
    int col = 1;
    int col_count = 0;
    n++;

    for (i=0; i<n; i++) {
        if ((i % 2) != 0) {
            printf("%d ", i);
            col_count++;
        }
        if (col_count == col) {
            printf("\n");
            col++;
            col_count = 0;
        }
    }

    printf("\n");
    i = 0;
    col = 1;
    col_count = 0;
    while (i<n) {
        if ((i % 2) != 0) {
            printf("%d ", i);
            col_count++;
        }
        if (col_count == col) {
            printf("\n");
            col++;
            col_count = 0;
        }
        i++;
    }

    printf("\n");
    i = 0;
    col = 1;
    col_count = 0;
    do {
        if ((i % 2) != 0) {
            printf("%d ", i);
            col_count++;
        }
        if (col_count == col) {
            printf("\n");
            col++;
            col_count = 0;
        }
        i++;
    } while (i<n);

    return 0;
}