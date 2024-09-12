//Name 18.c
//author Susmita Roy
/*18. Write a program to perform Record locking.
a. Implement write lock
b. Implement read lock
Create three records in a file. Whenever you access a particular record, first lock it then modify/access
to avoid race condition.
*/
 #include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdlib.h>
struct{
	int train_num,ticket_count;
}db;
int main()
{int input;
	printf("select train no:- \n");
	scanf("%d",&input);
	int fd=open("record.txt",O_RDWR);
	struct flock lock;
	lock.l_type=F_WRLCK;
	lock.l_whence=SEEK_SET;//this is for locking correct c.s
	lock.l_start=(input-1)*sizeof(db);
	lock.l_len=sizeof(db);
	lock.l_pid=getpid();
	lseek(fd,(input-1)*sizeof(db),SEEK_SET);//this is for read,for positioning cursor in rt position
	read(fd,&db,sizeof(db));
	printf("before c.s\n");
	fcntl(fd,F_SETLKW,&lock);
	printf("current ticket no. %d of train no. %d\n",db.ticket_count,db.train_num);
	db.ticket_count++;
	lseek(fd,-1*sizeof(db),SEEK_CUR);//overwriting 1st db record
	write(fd,&db,sizeof(db));
	printf("to book ticket,press enter\n");
	getchar();
	getchar();
	lock.l_type=F_UNLCK;
	fcntl(fd,F_SETLK,&lock);
	printf("booked\n");
	return 0;
}
/*
 output
  works to ensure mutual exclusion per record when opened separate terminals
  select train no:-

1
before c.s
current ticket no. 4 of train no. 1
to book ticket,press enter

booked
*/
