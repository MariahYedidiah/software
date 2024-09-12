//Name 17_2.c
//Author Susmita Roy
/*
 * Write a separate program, to
open the file, implement write lock, read the ticket number, increment the number and print
the new ticket number then close the file.*/
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdlib.h>
int main()
{int db;
	struct flock lock;
	int fd=open("dbfile",O_RDWR);
	if(fd==-1)
	{printf("error opening file\n");
	exit(1);
	
	}

	read(fd,&db,sizeof(db));
	lock.l_type=F_WRLCK;
	lock.l_whence=SEEK_SET;
	lock.l_start=lock.l_len=0;
	lock.l_pid=getpid();
	printf("before entering c.s\n");
	fcntl(fd,F_SETLKW,&lock);
	printf("inside c.s\n");
	printf("current ticket no:  %d\n",db);
	db++;
	lseek(fd,0,SEEK_SET);
	write(fd,&db,sizeof(db));

	printf("enter to unlock\n");
	getchar();
	lock.l_type=F_UNLCK;
	fcntl(fd,F_SETLKW,&lock);
	close(fd);
	printf("unlocked\n");
	return 0;
}
/*
 output
 before entering c.s
inside c.s
current ticket no:  12
enter to unlock

unlocked

before entering c.s
inside c.s
current ticket no:  13
enter to unlock

unlocked
*/
