#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{

    int pr=fork();
    if(pr>0){
        sleep(10);
        printf("Inside parent process\n");
    }
    else if(pr==0){
        
        printf("Inside child process\n");
        }

}