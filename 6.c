//Name-6.c
//Author- Susmita Roy
//Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
     char *buf[80];   
int k=read(0,buf,80);
write(1,buf,k);
	return 0;
}
/*
 * output
 SIng Hallelujah to the Lord
SIng Hallelujah to the Lord
*/
