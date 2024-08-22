#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
int main()
{char buff[80];
 int fd=open("ls file",O_RDONLY);
 while(read(fd,buff,1))
 {
	 if(buff[0]=='\n')//instead if its "\n"-gives comparison between
			  //pointer and integer error,cuz of pointer to "\n"
		 getchar();
	 else 
		 printf("%c",buff[0]);}
 close(fd);
 return 0;
}
