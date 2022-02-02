#include<stdio.h>

#define NUM1 10
#define NUM2 13

void kgv(int, int);
int ggt(int, int);

void main() {
    kgv(NUM1, NUM2);
}

int ggt(int num1, int num2) {
    int tmp = 0;

    while (num2 != 0) {
        tmp = num1 % num2;
        num1 = num2;
        num2 = tmp;
    }

    return num1;
}

void kgv(int num1, int num2) {
    int ggt_value = ggt(num1, num2);
    int kgv_value = (num1 * num2) / ggt_value;

    printf("%d", kgv_value);
}
