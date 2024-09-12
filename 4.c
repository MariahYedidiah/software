/*/**Name : 4.c
Author : Susmita Roy
4. Write a program to open an existing file with read write mode. Try O_EXCL flag also.
*/



#include<stdio.h>
#include<fcntl.h>
int main()
{ 
int fd1=open("GraceAndTruth",O_RDWR);
int fd2=open("GraceAndTruth",O_RDWR|O_EXCL);
printf("fd1 and fd2 are %d %d respectively",fd1,fd2);
	return 0;
}
/*
 output
 fd1 and fd2 are 3 4 respectively
 */

