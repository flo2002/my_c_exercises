#include<stdio.h>

#define N_TERMS 32
#define Z_EXP 2

float exp_fak();

void main() {
    printf("Result: %f\n", exp_fak());
}

float exp_fak() {
    float out = 1.0f;
    float z = 1.0f;
    float fak = 1.0f;
    int i = 0;

    for (i=0; i<N_TERMS; i++) {
        if (i != 0) {
            fak *= i;
            z *= Z_EXP;
            out += (z / fak);
        }
    }

    return out;
}
