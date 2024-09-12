//name 22.c
//Author Susmita Roy
//22. Write a program, open a file, call fork, and then write to the file by both the child as well as the
//parent processes. Check output of the file.

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include<stdlib.h>

int main() {
    int fd, forkop;
    const char *filename = "22_output.txt";
    const char *parent_message = "Parent process writing.\n";
    const char *child_message = "Child process writing.\n";

    // Open the file for writing (create it if it doesn't exist, truncate it if it does)
    fd = open(filename, O_WRONLY | O_CREAT | O_EXCL, 0744);
    if (fd < 0) {
        perror("open");
        exit(1);
    }

    // Fork a new process
    forkop = fork();

    if (forkop < 0) {
        // Fork failed
        perror("fork failed");
        close(fd);
        exit (1);
    } else if (forkop == 0) {
        // Child process
        // Write to the file from the child process
        if (write(fd, child_message, strlen(child_message)) < 0) {
            perror("write in child failed");
            close(fd);
            exit (1);
        }
        printf("Child process wrote to the file.\n");
    } else {
        // Parent process
        // Sleep to ensure child process writes first (optional)
        sleep(3);
        // Write to the file from the parent process
        if (write(fd, parent_message, strlen(parent_message)) < 0) {
            perror("write in parent failed");
            close(fd);
            exit (1);
        }
        printf("Parent process wrote to the file.\n");
    }

    // Close the file descriptor
    close(fd);

    return 0;



}
/*
 OUTPUT
 
 Child process wrote to the file.
Parent process wrote to the file.

cat 22_output.txt

Child process writing.
Parent process writing.
*/
