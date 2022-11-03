#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<fcntl.h>

void main(){
    int f,f1;
    char buf[50];
    f=open("hello.txt",O_RDWR);
    f1=open("target",O_RDWR);
    read(f,buf,10);

    write(f1,buf,10);
    printf("data:%s",buf);
     lseek(f,5,SEEK_CUR);
     read(f,buf,5);
    printf("data:%s",buf);
    
}