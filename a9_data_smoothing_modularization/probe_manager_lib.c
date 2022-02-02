#include "probe_manager_lib.h"

int abs(int a) {
    if (a < 0) {
        a * -1;
    }
    return a;
}

void data_smoothing(probe *p) {
    int i = 0, avr = 0, sum = 0;

    for (i=1; i<=MAX_LEN; i++) {
        sum += p->speed;

        if (i==1) {
            avr = sum;
        }

        if (p->speed > 2*avr) { 
            p->speed = avr;
        } else {
            avr = sum / i;
        }

        p++;
    }
}
