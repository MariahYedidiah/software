//Name 17_1
//Author Susmita Roy
/*Write a program to simulate online ticket reservation. Implement write lock
Write a program to open a file, store a ticket number and exit.
 */
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
/*	struct ticketcreator{
		int ticket_no;
	}db;*/

//	db.ticket_no=10;
	int db=10;
	int fd=open("dbfile",O_CREAT|O_RDWR,0744);
	write(fd,&db,sizeof(db));
	close(fd);
	fd=open("dbfile",O_RDONLY,0744);
	read(fd,&db,sizeof(db));
//	printf("ticket number = %d\n",db.ticket_no);
 	 printf("ticket number = %d\n",db);

	close(fd);




	return 0;
}
