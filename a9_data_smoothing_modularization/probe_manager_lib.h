#define MAX_LEN 10
#ifndef PROBE_MANAGER_LIB_H_
#define PROBE_MANAGER_LIB_H_

typedef struct probe_t {
    int timestamp;
    int speed;
    int sea_level;
} probe;

void data_smoothing(probe*);

#endif