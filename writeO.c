#include<unistd.h>

#include<fcntl.h>

#include<sys/types.h>

#include<sys/stat.h>

int main()

{

int n, fd, fd1;
char buf[50];
fd=open("hello.txt", O_RDONLY|O_CREAT);

n=read(fd, buf,10);


fd1=open("target",O_CREAT|O_WRONLY, 0642); 
write(fd1, buf,n);
}