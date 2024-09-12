//
//name 29.c
//author Susmita Roy
//Write a program to get scheduling policy and modify the scheduling policy (SCHED_FIFO,
//SCHED_RR).
#include <stdio.h>
#include <stdlib.h>
#include <sched.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

void print_policy(int policy) {
    switch (policy) {
        case SCHED_FIFO:
            printf("Current scheduling policy: SCHED_FIFO\n");
            break;
        case SCHED_RR:
            printf("Current scheduling policy: SCHED_RR\n");
            break;
        case SCHED_OTHER:
            printf("Current scheduling policy: SCHED_OTHER\n");
            break;
        default:
            printf("Current scheduling policy: Unknown\n");
            break;
    }
}

int main(int argc, char *argv[]) {
printf("%d %d %d\n",SCHED_FIFO,SCHED_RR,SCHED_OTHER);
    
	if (argc != 2) {
        fprintf(stderr, " less arguments in %s \n", argv[0]);
//        fprintf(stderr, "Policy options: SCHED_FIFO, SCHED_RR\n");
        return EXIT_FAILURE;
    }

    // Get the current scheduling policy
    int policy = sched_getscheduler(0); // 0 means current process
    if (policy == -1) {
        perror("sched_getscheduler(0) failed");
        return EXIT_FAILURE;
    }
    print_policy(policy);

    // Determine the new scheduling policy based on user input
    int new_policy;
    if (strcmp(argv[1], "SCHED_FIFO") == 0) {
        new_policy = SCHED_FIFO;
    } else if (strcmp(argv[1], "SCHED_RR") == 0) {
        new_policy = SCHED_RR;
    } else {
        fprintf(stderr, "Invalid policy. Use SCHED_FIFO or SCHED_RR.\n");
        return EXIT_FAILURE;
    }

    // Set the new scheduling policy
    struct sched_param sched_param;
    sched_param.sched_priority = sched_get_priority_max(new_policy); // Set to max priority for simplicity

    if (sched_setscheduler(0, new_policy, &sched_param) == -1) {
        perror("error while setting new policy with max priority in sched_setscheduler");
        return EXIT_FAILURE;
    }

    // Verify the new scheduling policy
    policy = sched_getscheduler(0);
    if (policy == -1) {
        perror("some error in setting new policy with max priority sched_getscheduler");
        return EXIT_FAILURE;
    }
    print_policy(policy);

    return EXIT_SUCCESS;
}

/*
 
  output

  sudo ./a.out "SCHED_FIFO"
[sudo] password for susmita-roy:
1 2 0
Current scheduling policy: SCHED_OTHER
Current scheduling policy: SCHED_FIFO

*/
