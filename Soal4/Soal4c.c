#include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<string.h> 
#include<sys/wait.h> 
 
int pid;
int pipe1[2];
 
int main()
{
    if (pipe(pipe1) == -1)
    exit(1);
 
    if ((fork()) == 0) {
        dup2(pipe1[1], 1);
        close(pipe1[0]);
        close(pipe1[1]);
        char *argv1[] = {"ls", NULL};
        execv("/bin/ls", argv1);
    }
    else {
        dup2(pipe1[0],0);
        close(pipe1[0]);
        close(pipe1[1]);
        char *argv1[] = {"wc", "-l", NULL};
        execv("/usr/bin/wc", argv1);
    }
}
