#include<stdio.h>

#define SIZE 5

int max_of_array(int[], int);

void main() {
    int values[SIZE] = {3, 5, 10, 2, 1};

    printf("Maximum: %d\n", max_of_array(values, SIZE));
}

int max_of_array(int values[], int len) {
    int max = 0;
    int i = 0;

    for (i=0; i<len; i++) {
        if (max < values[i]) {
            max = values[i];
        }
    }

    return max;
}