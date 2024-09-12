//name 27_e.c
//author Susmita Roy
//Write a program to execute ls -Rl by the following system calls e.execvp

#include<stdio.h>
#include<unistd.h>
//extern char ** environ;
int main(void)
{char *arrForexecvp[]={"-l","-a",NULL};

	execvp("ls",arrForexecvp);
	return 0;
}
/*
 *
 output

  .	     14.c	       22.c	       27_e.c		 Emmanuel	 inf5	        :q
 ..	     15.c	       22_output.txt   30.c		 .git		 InfLoop.c      ReadWrite.c
 10a.c	     16a.c	       23.c	       5.c		 Grace		 Jesus	        record.txt
 .10.c.swo   16b.c	       24.c	       7.c		 GraceAndTruth	 JesusIsGod     SoftLink.c
 .10.c.swp   17_1.c	       25.c	       9.c		 Grace_myfifo	 JesusIsLord    Yeshua
 11a.c	     17_2.c	       26.c	      'Amazing grace'	 HardLink.c	'ls file'
 11b.c	     18.c	       27_a.c	      'Amazing grace2'	 HelloWorld.c	 Messiah
 11.c	     18_initialize.c   .27_a.c.swp     a.out		 inf1		 Mknod_test.c
 .11.c.swp   19.c	       27_b.c	       Copy1to2.c	 inf2		 openFile2.c
 12.c	     21_b.c	       27_c.c	       creatFile.c	 inf3		 openFile.c
 13.c	     21.c	       27_d.c	       dbfile		 inf4		 pipe1
*/

