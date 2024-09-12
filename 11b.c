#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(void)
{
int fd1=open("Emmanuel",O_RDWR,S_IRWXU);
int fd3=dup2(fd1,777);
	char buff[30];
	int k=read(0,buff,20);
	lseek(fd1,0,SEEK_END);
	write(fd3,buff,k);
	close(fd1);close(fd3);


return 0;
}
