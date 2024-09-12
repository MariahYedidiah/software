#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdlib.h>
int main()
{struct train_booking{
	int train_no;
	int ticket_count;
		     }db[3];
for(int i=0;i<3;i++){
	db[i].train_no=i+1;
	db[i].ticket_count=0;
}
int fd=open("record.txt",O_RDWR|O_CREAT|O_EXCL,0744);
write(fd,&db,sizeof(db));
close(fd);
	
	return 0;
}
	
