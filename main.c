#include <stdio.h> // printf
#include <unistd.h> // sleep
#include <time.h> // clock_gettime

#define BILLION 1000000000L

int main() {

    // start time
    float time_diff = 0;
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);

    // the bigass app
    printf("I forgot how to write C!\n");
    sleep(1);

    // finish and print timer
    clock_gettime(CLOCK_MONOTONIC, &end);
    time_diff = (end.tv_sec - start.tv_sec) + (end.tv_sec - start.tv_sec) / BILLION;
    printf("Runtime: %8.4fs\n", time_diff);
    return 0;
}
