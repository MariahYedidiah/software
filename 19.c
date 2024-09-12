//name 19.c
//author Susmita Roy
//Write a program to find out time taken to execute getpid system call. Use time stamp counter.
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/time.h>
unsigned long long rdtsc(){
	unsigned long long dst;
	__asm__ __volatile__("rdtsc":"=A"(dst));
}
int main()
{
	int nano;
	unsigned long long int start,end;
	start=rdtsc();
	for(int i=0;i<=10000;i++)
		getpid();
	end=rdtsc();
	nano=(end-start)/2.09;
	printf("The function takes %d nano sec\n",nano);

	return 0;
}
/*
 * output
 * The function takes 720498 nano sec
 * */
