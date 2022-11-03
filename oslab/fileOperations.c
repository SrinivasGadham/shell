#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main()
{
    int fd;
    char msg[] = "hello this is os lab";
    char msg1[50];
    fd = open("hello.txt", O_RDWR);
   write(fd,msg,sizeof(msg));
    read(fd,msg1,10);

    printf("readed file : %s\n",msg1);   
    // lseek(fd,4,SEEK_CUR);
    //  read(fd,msg1,2);
    //  printf("readed file after seeking from%s\n",msg1);

}
