// C program using Fork()
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

pid_t wait();

void main() {
    int x = getpid();
    int pid, pid1, pid2;

    printf("Before the fork: parent process PID is %d\n", x);

    pid = fork();
    if (pid == 0) {
        printf("\nI am first child process with pid %d and ppid %d\n", getpid(), getppid());
    }
    else {
        pid1 = fork();
        if (pid1 == 0) {
            printf("I am second child process with pid %d and parent pid %d\n", getpid(), getppid());
        }
        else {
            pid2 = fork();
            if (pid2 == 0) {
                printf("I am third child process with pid %d and parent pid %d\n", getpid(), getppid());

            }
            else {
                sleep(3);
                printf("Parent process with pid %d\n", getpid());
            }
        }   
    }
    
    
}