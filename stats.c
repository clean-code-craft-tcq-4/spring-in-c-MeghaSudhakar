#include "stats.h"

typedef struct Stats (const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
}compute_statistics;

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
