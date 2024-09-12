#include<stdio.h>
#include<unistd.h>
int main()
{int forkop=fork();
	if(forkop)
		printf("Parent process,Pid= %d \n",getpid());
	else
		printf("Child process,Pid= %d and its parent's Pid = %d \n",getpid(),getppid());
	return 0;
}
