#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	pid_t pid;
	pid = fork();

	if(pid>0)
	{
		while(1)
		{
			printf("parent %d\n",getpid());
			sleep(1);
			peintf("heh\n");
		}
	}
	if(0==pid)
	{
		printf("child %d\n,getpid");
	
	}
	else
	{
		printf("fork error\n");
	
	}
	return 0;
	

}
