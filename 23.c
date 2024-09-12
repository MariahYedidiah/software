//name 23.c
//author Susmita Roy
//23. Write a program to create a Zombie state of the running program.
//
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    // Create a child process
    pid = fork();

    if (pid < 0) {
        // Fork failed
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (pid == 0) {
        // This is the child process
       
        printf("Child process (PID %d) is now in zombie state\n", getpid());
	printf("i'll exit before my parent- my pid =%d ,my ppid=%d\n",getpid(),getppid());
           } 
    else {
        // This is the parent process
        printf("Parent process (PID %d) will now sleep...\n", getpid());
        sleep(5);  // Sleep for 60 seconds to keep the parent process alive

       	wait(0);
        printf("Parent process (PID %d) exiting...\n", getpid());
        
    }
}

/*
  OUTPUT
 
 Parent process (PID 66372) will now sleep...
Child process (PID 66373) is now in zombie state
i'll exit before my parent- my pid =66373 ,my ppid=66372
Parent process (PID 66372) exiting...

*/
