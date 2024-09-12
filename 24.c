//
//name 14.c
//author Susmita Roy
//24. Write a program to create an orphan process.

#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
	int main()
{ if(fork())
	{sleep(2);
		printf("im parent who will orphan my child ,Pid %d \n", getpid());
//		wait(0);
	}
else{ 

	printf("i'm child while my parent is alive,Pid= %d,my Parent's Pid=%d \n",getpid(),getppid());
	sleep(5);
	printf("i'm child when orphaned ,Pid= %d,my Parent's Pid=%d \n",getpid(),getppid());

}

	return 0;

}
/*
 OUTPUT 

 i'm child while my parent is alive,Pid= 66121,my Parent's Pid=66120
im parent who will orphan my child ,Pid 66120
i'm child when orphaned ,Pid= 66121,my Parent's Pid=1728

*/


