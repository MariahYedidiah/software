/* 	Name :-3.c
 *  	Author :-Susmita Roy
 *  	Write a program to create a file and print the file descriptor value. Use creat ( ) system call
 *  	*/


#include<stdio.h>
#include<fcntl.h>
int main()
{ 
int fd1=open("Amazing grace",0700,O_CREAT|O_RDWR,S_IRWXU);
//int fd2=open("Amazing grace",0700,O_EXCL|O_RDWR);
printf("fd1 is  %d\n ",fd1);
	return 0;
}
/*

   output

   fd1 is  3
*/
