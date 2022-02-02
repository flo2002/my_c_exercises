#include<stdio.h>

#define X 4
#define N_Y 16

float sqr(int);

void main() {
    printf("Result: %f\n", sqr(X));
}

float sqr(int x) {
    float out = (x / 2);
    int i = 0;

    for (i=0; i<N_Y; i++) {
        if (i != 0) {
            out = 0.5*(out + (x / out));
        }
    }

    return out;
}
