//Name 20.c
//author Susmita Roy
//20. Find out the priority of your running program.Modify the priority with nice command.


#include <stdio.h>
#include <unistd.h>
#include <sys/resource.h>
#include <errno.h>

int main() {
    // Get the current priority of the process
    int priority = getpriority(PRIO_PROCESS, 0);
    if (priority == -1 && errno != 0) {
        perror("getpriority");
        return 1;
    }

    printf("Current priority of process %d: %d\n", getpid(), priority);

    return 0;

}
/*
 
   Current priority of process 73800: 0
sudo nice -n -10 ./a.out
[sudo] password for susmita-roy: 
Current priority of process 73916: -10
*/

