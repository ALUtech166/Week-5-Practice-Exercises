#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>  

void main()
{
    int pid;
    int status;
    int x = getpid();
    printf("Hello Aliens! Here is parent and child process using Fork()\n\n");
    pid = fork();
    
    if(pid == -1) 
    {
        perror("bad fork");
        exit(1);
    }
    if (pid == 0){
        printf("I am the child process with pid %d.\n", getpid());
    }
    else
    {
        wait(&status); 
        printf("I am the parent process with ppid %d.\n", getppid());
    }
}