#include<stdio.h>
#include<unistd.h>
int main(){
    pid_t ret_value;
    printf("\n The process id is %d\n",getpid());
    ret_value=fork();
    if (ret_value<0)
    {
        printf("Fork failure");
    }
    else if (ret_value==0)
    {
        printf("\nChild process\n");
        printf("The process id is %d\n",getpid());
        sleep(20);
    }
    else{
        //wait();
        printf("Parent proces\n");
        printf("The process id is %d\n",getpid());
        sleep(30);

    }
    return 0;

}