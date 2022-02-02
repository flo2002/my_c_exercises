#include<stdio.h>

int main() {
    int values[] = {3, 5, 7, 8, 1, -1, 4, 0};
    float am = 0;
    int i = 0;
    int len = sizeof(values)/sizeof(values[0]);
    int max = 0, min = 0;

    for (i=0; i<len; i++) {
        am += values[i];

        if (max < values[i]) {
            max = values[i];
        }

        if (min > values[i]) {
            min = values[i];
        }
    }
    am = am / len;

    printf("arithmetisches Mittel: %f\n", am);
    printf("globale Maxima: %d\n", max);
    printf("globale Minima: %d", min);


    return 0;
}