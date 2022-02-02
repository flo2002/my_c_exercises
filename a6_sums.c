#include<stdio.h>

#define SIZE 8
#define SUM_MIN 5
#define SUM_MAX 7
#define SUM_BETWEEN_LEN SUM_MAX-SUM_MIN+1

int sum(int[], int);
int del_uneven(int[]);
int sum_between(int[]);


void main() {
    int values[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};

    printf("Gesamtsumme: %d\n", sum(values, SIZE));
    printf("Summe gerader Zahlen: %d\n", del_uneven(values));
    printf("Summe zwischen: %d\n", sum_between(values));
}


int sum(int values[], int len) {
    int out = 0;
    int i = 0;

    for (i=0; i<len; i++) {
        out += values[i];
    }

    return out;
}

int del_uneven(int values[]) {
    int i = 0;
    static int new_values[SIZE] = { 0 };

    for (i=0; i<SIZE; i++) {
        if (values[i] % 2 == 0) {
            new_values[i] = values[i];
        }
    }

    int out = sum(new_values, SIZE); 
    return out;
}

int sum_between(int values[]) {
    int out = 0;
    int i = 0;
    int new_values[SUM_BETWEEN_LEN] = { 0 };

    for (i=0; i<SUM_BETWEEN_LEN; i++) {
        new_values[i] = values[i+SUM_MIN-1];
    }

    out = sum(new_values, SUM_BETWEEN_LEN);
    return out;
}