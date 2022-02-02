#include<stdio.h>

#define NUM 22

void prime_factorization(int);

void main() {
    prime_factorization(NUM);
}

void prime_factorization(int num) {
    int quotient = 1;

    while (num != 1) {
        quotient++;
        while ((num % quotient) == 0) {
            printf("%10d | %d\n", num, quotient);
            num = num / quotient;
        }
    }
    printf("%10d |", num);
}