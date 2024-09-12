//name 21.c
//author Susmita Roy
//21. Write a program, call fork and print the parent and child process id.
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include<sys/wait.h>
int main() {
    //pid_t pid;

    // Create a new process
int     forkop = fork();

    if (forkop < 0) {
        // Fork failed
        perror("fork");
        return 1;
    } else if (forkop == 0) {
        // This block will be executed by the child process
        printf("Child process:\n");
        printf("PID: %d\n", getpid());
        printf("Parent PID: %d\n", getppid());
    } else {
        // This block will be executed by the parent process
	printf("Parent process:\n");
        printf("PID: %d\n", getpid());
        printf("Child PID: %d\n", forkop);
	wait(0);
    }

    return 0;
}
/*
 * Parent process:
PID: 87818
Child PID: 87819
Child process:
PID: 87819
Parent PID: 87818
*/
