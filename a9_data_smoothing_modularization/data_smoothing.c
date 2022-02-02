#include <stdio.h>
#include "probe_manager_lib.h"

void main() {
    probe p1[MAX_LEN] = {
        { 0, 40, 2000 },
        { 1, 30, 1990 }, 
        { 2, 50, 1980 }, 
        { 3, 50, 1970 }, 
        { 4, 40, 1960 }, 
        { 5, 20, 1950 }, 
        { 6, 30, 1940 }, 
        { 7, 90, 1930 }, 
        { 8, 80, 1920 }, 
        { 9, 40, 1910 }, 
    };

    printf("Before: \n");
    int i = 0;
    for (i=0; i<MAX_LEN; i++) {
        printf("Timestamp: %d, Speed: %d, SeaLevel: %d \n", p1[i].timestamp, p1[i].speed, p1[i].sea_level);
    }

    data_smoothing(p1);
    printf("After: \n");

    for (i=0; i<MAX_LEN; i++) {
        printf("Timestamp: %d, Speed: %d, SeaLevel: %d \n", p1[i].timestamp, p1[i].speed, p1[i].sea_level);
    }
}
