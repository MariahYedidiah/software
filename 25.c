//name 25.c
//author Susmita Roy
//25. Write a program to create three child processes. The parent should wait for a particular child (use
//waitpid system call).

#include <stdio.h>
#include <sys/time.h>
#include <sys/wait.h>
#include <unistd.h>
int main()
{int i,j,k;
	if(!(i=fork()))
	{printf("i'm child with pid=%d \n",getpid());	sleep(1);}
	else if(!(j=fork()))
	{printf("i'm child with pid=%d \n",getpid());
		sleep(3);}
	else
		if(!(k=fork()))
			{printf("i'm child with pid=%d \n",getpid());		
				sleep(10);}
		else
		{	waitpid(j,NULL,0);
			printf("i'm parent(pid = %d)  waiting for child with pid = %d\n",getpid(),j);
		}

	return 0;
}

/*
 OUTPUT

 i'm child with pid=66653
i'm child with pid=66654
i'm child with pid=66655
i'm parent(pid = 66652)  waiting for child with pid = 66654

*/
