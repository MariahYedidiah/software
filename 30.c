//name 30.c
//author Susmita Roy
//30. Write a program to run a script at a specific time using a Daemon process.
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>
#include <string.h>

#define SCRIPT_PATH "/home/susmita-roy/Trial/periodicScript.sh"
#define TARGET_HOUR 22   // Hour (24-hour format) when the script should run
#define TARGET_MINUTE 43 // Minute when the script should run

void run_script() {
    // Execute the script
    execl(SCRIPT_PATH, SCRIPT_PATH, NULL);
    perror("execl"); // If execl returns, it must have failed
}

int main() {
    pid_t pid, sid;
    time_t current_time;
    struct tm *time_info;

    // Fork the parent process
    pid = fork();
    if (pid < 0) {
        exit(EXIT_FAILURE);
    }

    if (pid > 0) {
        // Parent process exits
        exit(EXIT_SUCCESS);
    }

    // Child process continues

    // Create a new session and detach from terminal
    sid = setsid();
    if (sid < 0) {
        exit(EXIT_FAILURE);
    }

    // Change the current working directory to root
    if (chdir("/") < 0) {
        exit(EXIT_FAILURE);
    }

    // Close standard file descriptors
    close(STDIN_FILENO);
    close(STDOUT_FILENO);
    close(STDERR_FILENO);

    while (1) {
        // Get current time
        time(&current_time);
        time_info = localtime(&current_time);

        // Check if the current time matches the target time
        if (time_info->tm_hour == TARGET_HOUR && time_info->tm_min == TARGET_MINUTE) {
            run_script();
            // Wait 60 seconds to avoid multiple executions in the same minute
            sleep(60);
        }

        // Sleep for 30 seconds before checking again
        sleep(30);
    }

    return 0;
}
