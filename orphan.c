
#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{	
	int pid = fork();
	if (pid > 0)
{
	printf(argv)
        printf("id of parent:%d\n ",getpid());
		printf("in parent process");
}
	else if(pid == 0)
	{
        printf("id of child:%d\n ",getpid());
		sleep(30);
        
		printf("in child process");
	}

	return 0;
}
