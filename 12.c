//Name:-12.c
//Author:-Susmita Roy
//Write a C ANSI style program to find out the opening mode of a file. Use fcntl.

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(void)
{
	int fd=open("Emmanuel",O_RDWR);
int k=	fcntl(fd,F_GETFL);
printf("\n%d ",k & 3);//3=bitmask,last 2bits
close(fd);
fd=open("Emmanuel",O_RDONLY);
k=  fcntl(fd,F_GETFL);
printf("\n%d ",k & 3);//3=bitmask,last 2bits
close(fd);
fd=open("Emmanuel",O_WRONLY);
k=  fcntl(fd,F_GETFL);
printf("\n%d ",k & 3);//3=bitmask,last 2bits
close(fd);

return 0;
}
//output:-
//2
//0
//1
