//name 28.c
//author Susmita Roy
//28. Write a program to get maximum and minimum real time priority.

#include <stdio.h>
#include <sched.h>
#include <errno.h>

int main() {
    int max_priority, min_priority;

    // Get the maximum real-time priority
    max_priority = sched_get_priority_max(SCHED_FIFO);
    if (max_priority == -1) {
        perror("sched_get_priority_max");
        return 1;
    }

    // Get the minimum real-time priority
    min_priority = sched_get_priority_min(SCHED_FIFO);
    if (min_priority == -1) {
        perror("sched_get_priority_min");
        return 1;
    }

    printf("Real-time priority range for SCHED_FIFO:\n");
    printf("Maximum priority: %d\n", max_priority);
    printf("Minimum priority: %d\n", min_priority);

    // You can also check the priority range for SCHED_RR if desired
    max_priority = sched_get_priority_max(SCHED_RR);
    if (max_priority == -1) {
        perror("sched_get_priority_max (SCHED_RR)");
        return 1;
    }

    min_priority = sched_get_priority_min(SCHED_RR);
    if (min_priority == -1) {
        perror("sched_get_priority_min (SCHED_RR)");
        return 1;
    }

    printf("Real-time priority range for SCHED_RR:\n");
    printf("Maximum priority: %d\n", max_priority);
    printf("Minimum priority: %d\n", min_priority);

    return 0;
}

/*
 Real-time priority range for SCHED_FIFO:
Maximum priority: 99
Minimum priority: 1
Real-time priority range for SCHED_RR:
Maximum priority: 99
Minimum priority: 1
*/
