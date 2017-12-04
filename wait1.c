#include<stdio.h>


int main()
{
	pid_t pid;
	pid = fork();
	if(pid>0)
	{
		while(1)
		{
	`		printf("[arent %d\n",getpid());
			bid_c=wait(NULL);
		}
	
	}
	else if(pid==0)
	{
		printf("child %d\n",getpid());
		sleep(10);
	}
	else
	{
		printf("error\n");
	
	}


	return 0;	

}
