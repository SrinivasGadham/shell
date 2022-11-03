#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main()
{
    int fd,fd1,fd2;
    fd = open("hello1.txt", O_RDONLY|O_CREAT);
    fd1 = open("hello.txt", O_WRONLY|O_CREAT);
    fd2 = open("hello3.txt", O_RDONLY|O_CREAT);
    printf("fd = %d\n", fd);
    printf("fd1 = %d\n", fd1);
    printf("fd2 = %d\n", fd2);
    char c[100]="hello rammmante vacchesindha cheli";
    write(fd1,&c,sizeof(c));
    char b[100];
    read(fd,&b,sizeof(b));
    printf("readed file %s\n",b);
    lseek(fd2,2,SEEK_CUR);
    char d[100];
    read(fd2,&d,sizeof(d));
    printf("readed file after seeking from %s\n",d);

}
///hello.txt
//hello this is os lab

//hello3.txt
//Ashok the great

