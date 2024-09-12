//Name 7.c
//Author Susmita Roy
//Write a program to copy file1 into file2 ($cp file1 file2).

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(int argc,char *argv[])
{
int fd=open(argv[1],O_RDWR);
char * buf[100];
int count=read(fd,buf,100);
int fd2=creat(argv[2],O_RDWR|O_EXCL|S_IRWXU);
write(fd2,buf,count);

return 0;
}
/*
 output

 ./a.out JesusIsGod JesusIsLord
 cat JesusIsGod JesusIsLord
Jesus Christ
my living hope
Jesus Christ
my living hope
*/
