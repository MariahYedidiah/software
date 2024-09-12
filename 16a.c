//Name 16a.c
//Author Susmita Roy
/*16. Write a program to perform mandatory locking.
a. Implement write lock*/
 #include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{struct flock lock;
	int fd=open("dbfile",O_RDWR);
	lock.l_type=F_WRLCK;
	lock.l_whence=SEEK_SET;
	lock.l_start=0;
	lock.l_len=0;
	lock.l_pid=getpid();
	printf("before c.s\n");
	fcntl(fd,F_SETLKW,&lock);
	printf("inside c.s\n");
	printf("enter to unlock\n");
 	getchar();
	lock.l_type=F_UNLCK;
	fcntl(fd,F_SETLKW,&lock);
 printf("unlocked\n");
 close(fd);

	

	return 0;

}
/*
 output

 before c.s
inside c.s
enter to unlock

unlocked
*/
