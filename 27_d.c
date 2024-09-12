//name 27_d.c
//author Susmita Roy
//Write a program to execute ls -Rl by the following system calls d.execv

#include<stdio.h>
#include<unistd.h>
//extern char ** environ;
int main(void)
{
char *arrForexecv[]={"-l","-a",NULL};
execv("/bin/ls",arrForexecv);
return 0;
}
/*
 output

 .	     13.c	       21_b.c	       27_b.c		 Copy1to2.c	 inf1	       Messiah
 ..	     14.c	       21.c	       27_c.c		 creatFile.c	 inf2	       Mknod_test.c
 10a.c	     15.c	       22.c	       27_d.c		 dbfile		 inf3	       openFile2.c
 .10.c.swo   16a.c	       22_output.txt   30.c		 Emmanuel	 inf4	       openFile.c
 .10.c.swp   16b.c	       23.c	       5.c		 .git		 inf5	       pipe1
 11a.c	     17_1.c	       24.c	       7.c		 Grace		 InfLoop.c     :q
 11b.c	     17_2.c	       25.c	       9.c		 GraceAndTruth	 Jesus	       ReadWrite.c
 11.c	     18.c	       26.c	      'Amazing grace'	 Grace_myfifo	 JesusIsGod    record.txt
 .11.c.swp   18_initialize.c   27_a.c	      'Amazing grace2'	 HardLink.c	 JesusIsLord   SoftLink.c
 12.c	     19.c	       .27_a.c.swp     a.out		 HelloWorld.c	'ls file'      Yeshua

 */
