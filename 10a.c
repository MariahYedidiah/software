/*
 * Name 10a.c
 * Author Susmita Roy
 * 10. Write a program to open a file with read write mode, write 10 bytes, move the file pointer by 10
bytes (use lseek) and write again 10 bytes.
a. check the return value of lseek
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(void)
{
	
	int fd=open("Isaiah54",O_CREAT|O_RDWR|O_EXCL,S_IRWXU);
	printf("\nfile descriptor value%d\n",fd);
	char writeBuf[30],readBuf[30];
	
	read(0,writeBuf,10);
	write(fd,writeBuf,10);
	close(fd);
	fd=open("Isaiah54",O_RDWR,S_IRWXU);
	read(fd,readBuf,10);
	write(1,readBuf,10);
	close(fd);
	fd=open("Isaiah54",O_RDWR,S_IRWXU);
	int k=lseek(fd,10,SEEK_END);
	printf("\nlseek 's return value=%u\n",k);
	read(0,writeBuf,10);
	write(fd,writeBuf,10);
	close(fd);
		fd=open("Isaiah54",O_RDWR,S_IRWXU);
	int a=	read(fd,readBuf,30);
	
		write(1,readBuf,a);

close(fd);

}
/*
 output

file descriptor value3
JesusIsGodJesus=Lord
JesusIsGod
lseek 's return value=10
JesusIsGodJesus=Lord

cat Isaiah54

JesusIsGodJesus=Lord
*/
