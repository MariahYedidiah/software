#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(void)
{
	
	int fd=open("Isaiah54",O_CREAT|O_RDWR|O_EXCL,S_IRWXU);
	printf("file descriptor value%d\n",fd);
	char writeBuf[10],readBuf[10];
	
	read(0,writeBuf,10);
	write(fd,writeBuf,10);
	close(fd);
	fd=open("Isaiah54",O_RDWR,S_IRWXU);
read(fd,readBuf,10);
	write(1,readBuf,10);
	close(fd);
	fd=open("Isaiah54",O_RDWR,S_IRWXU);
	int k=lseek(fd,10,SEEK_CUR);



printf("lseek 's return value=%u\n",k);
read(0,writeBuf,10);
write(fd,writeBuf,10);
close(fd);
		fd=open("Isaiah54",O_RDWR,S_IRWXU);
		read(fd,readBuf,30);
	
		write(1,readBuf,30);



}
