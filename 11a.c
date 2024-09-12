#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{int fd1=open("Emmanuel",O_CREAT|O_RDWR|O_EXCL,S_IRWXU);
int fd2=dup(fd1);char buff[30];
int k=read(0,buff,20);
write(fd1,buff,k);
fflush(stdin);
k=read(0,buff,20);
write(fd2,buff,k);
close(fd1);close(fd2);
	return 0;
}

