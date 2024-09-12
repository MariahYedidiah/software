/*Name : 5.c
Author : Susmita Roy
5. Write a program to create five new files with infinite loop. Execute the program in the background
and check the file descriptor table at /proc/pid/fd.
*/
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int main()
{// const char * data="#include<stdio.h>\nint main(){\nwhile(1);\nreturn 0;\n}";
//	int l=strlen(data);
	int fd1 = open("inf1",O_CREAT|O_RDWR|O_TRUNC,0744);
        	int fd2 = open("inf2.c",O_CREAT|O_RDWR|O_TRUNC,0744);
           	int fd3 = open("inf3.c",O_CREAT|O_RDWR|O_TRUNC,0744);
          	int fd4 = open("inf4.c",O_CREAT|O_RDWR|O_TRUNC,0744);
          	int fd5 = open("inf5.c",O_CREAT|O_RDWR|O_TRUNC,0744);
  while(1)
  {
  }	  

	return 0;
}
/*
 output

 total 0
lrwx------ 1 susmita-roy susmita-roy 64 Aug 31 17:30 0 -> /dev/pts/4
lrwx------ 1 susmita-roy susmita-roy 64 Aug 31 17:30 1 -> /dev/pts/4
lrwx------ 1 susmita-roy susmita-roy 64 Aug 31 17:30 2 -> /dev/pts/4
lrwx------ 1 susmita-roy susmita-roy 64 Aug 31 17:30 3 -> /home/susmita-roy/Trial/inf1
lrwx------ 1 susmita-roy susmita-roy 64 Aug 31 17:30 4 -> /home/susmita-roy/Trial/inf2.c
lrwx------ 1 susmita-roy susmita-roy 64 Aug 31 17:30 5 -> /home/susmita-roy/Trial/inf3.c
lrwx------ 1 susmita-roy susmita-roy 64 Aug 31 17:30 6 -> /home/susmita-roy/Trial/inf4.c
lrwx------ 1 susmita-roy susmita-roy 64 Aug 31 17:30 7 -> /home/susmita-roy/Trial/inf5.c
*/
