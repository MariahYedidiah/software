//Name:-13.c
//Author:-Susmita Roy
//Write a C ANSI style program to wait for a STDIN for 10 seconds using select. Write a proper print statement to
//verify whether the data is available within 10 seconds or not (check in $man 2 select).

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/select.h>
#include <sys/time.h>
#include<stdlib.h>
int main(void)
{

	int fd=0;

	fd_set rdfdset;
	struct timeval timeout;

	FD_ZERO (&rdfdset);
  FD_SET (fd, &rdfdset);
  timeout.tv_sec=10;
int status=	  select(1,&rdfdset,NULL,NULL,&timeout);
//printf("\033[H\033[J"); // ANSI escape code to clear the terminal screen
//    fflush(stdout); 
fflush(stdout);
if(status==0)printf("\nno values entered in last 10sec in STDIN\n");
else printf("\nvalues were entered in STDIN in last 10 sec\n");

return 0;
}
/*
 output
 ./a.out
k

values were entered in STDIN in last 10 sec

./a.out

no values entered in last 10sec in STDIN

*/
