//name 27_a.c
//author Susmita Roy
//Write a program to execute ls -Rl by the following system calls
#include<stdio.h>
#include<unistd.h>
//extern char ** environ;
int main(void)
{//char ** arrForexecle=environ;
	
execl("/bin/ls","ls","-l",NULL);

}
/*
 OUTPUT

 total 208
-rw-rw-r-- 1 susmita-roy susmita-roy   627 Aug 28 20:14  10a.c
-rw-rw-r-- 1 susmita-roy susmita-roy   287 Aug 29 10:24  11a.c
-rw-rw-r-- 1 susmita-roy susmita-roy   258 Aug 28 22:55  11b.c
-rw-rw-r-- 1 susmita-roy susmita-roy   261 Aug 29 17:38  11.c
-rw-rw-r-- 1 susmita-roy susmita-roy   559 Aug 29 10:54  12.c
-rw-rw-r-- 1 susmita-roy susmita-roy   813 Aug 29 14:54  13.c
-rw-rw-r-- 1 susmita-roy susmita-roy  1076 Aug 29 18:35  14.c
-rw-rw-r-- 1 susmita-roy susmita-roy   378 Aug 31 11:43  15.c
-rw-rw-r-- 1 susmita-roy susmita-roy   482 Aug 30 12:50  16a.c
-rw-rw-r-- 1 susmita-roy susmita-roy   579 Aug 30 12:53  16b.c
-rw-rw-r-- 1 susmita-roy susmita-roy   453 Aug 30 12:29  17_1.c
-rw-rw-r-- 1 susmita-roy susmita-roy   686 Aug 30 15:05  17_2.c
-rw-rw-r-- 1 susmita-roy susmita-roy   966 Aug 30 17:10  18.c
-rw-rw-r-- 1 susmita-roy susmita-roy   376 Aug 30 15:28  18_initialize.c
-rw-rw-r-- 1 susmita-roy susmita-roy   389 Aug 30 19:57  19.c
-rw-rw-r-- 1 susmita-roy susmita-roy   230 Aug 31 09:28  21_b.c
-rw-rw-r-- 1 susmita-roy susmita-roy   687 Aug 31 10:18  21.c
-rw-rw-r-- 1 susmita-roy susmita-roy  1651 Aug 31 09:01  22.c
-rwxr--r-- 1 susmita-roy susmita-roy    47 Aug 31 08:58  22_output.txt
-rw-rw-r-- 1 susmita-roy susmita-roy  1032 Aug 31 10:10  23.c
-rw-rw-r-- 1 susmita-roy susmita-roy   590 Aug 31 09:47  24.c
-rw-rw-r-- 1 susmita-roy susmita-roy   636 Aug 31 10:35  25.c
-rw-rw-r-- 1 susmita-roy susmita-roy   101 Aug 31 11:26  26.c
-rw-rw-r-- 1 susmita-roy susmita-roy   446 Aug 31 11:44  27.c
-rw-rw-r-- 1 susmita-roy susmita-roy   298 Aug 31 10:16  30.c
-rw-rw-r-- 1 susmita-roy susmita-roy   469 Aug 15 18:54  5.c
-rw-rw-r-- 1 susmita-roy susmita-roy   338 Aug 15 18:42  7.c
-rw-rw-r-- 1 susmita-roy susmita-roy   673 Aug 16 00:15  9.c
---x------ 1 susmita-roy susmita-roy     0 Aug 10 17:26 'Amazing grace'
--w------- 1 susmita-roy susmita-roy     0 Aug 10 17:28 'Amazing grace2'
-rwxrwxr-x 1 susmita-roy susmita-roy 16288 Aug 31 11:44  a.out
-rw-rw-r-- 1 susmita-roy susmita-roy   251 Aug 11 00:21  Copy1to2.c
-rw-rw-r-- 1 susmita-roy susmita-roy   156 Aug 10 16:21  creatFile.c
-rwxr--r-- 1 susmita-roy susmita-roy     4 Aug 30 15:04  dbfile
-rwx------ 1 susmita-roy susmita-roy    35 Aug 28 22:55  Emmanuel
prw-rw-r-- 1 susmita-roy susmita-roy     0 Aug 10 01:07  Grace
-rwx------ 1 susmita-roy susmita-roy    13 Aug 11 00:23  GraceAndTruth
prwxr--r-- 1 susmita-roy susmita-roy     0 Aug 10 01:06  Grace_myfifo
-rw-rw-r-- 1 susmita-roy susmita-roy   110 Aug 10 00:12  HardLink.c
-rw-rw-r-- 1 susmita-roy susmita-roy    71 Aug  9 23:40  HelloWorld.c
-rwxr--r-- 1 susmita-roy susmita-roy     0 Aug 10 19:03  inf1
-rwxr--r-- 1 susmita-roy susmita-roy     0 Aug 10 19:03  inf2
-rwxr--r-- 1 susmita-roy susmita-roy     0 Aug 10 19:03  inf3
-rwxr--r-- 1 susmita-roy susmita-roy     0 Aug 10 19:03  inf4
-rwxr--r-- 1 susmita-roy susmita-roy     0 Aug 10 19:03  inf5
-rw-rw-r-- 1 susmita-roy susmita-roy    53 Aug 10 16:44  InfLoop.c
-rw-rw-r-- 2 susmita-roy susmita-roy    91 Aug 10 01:03  Jesus
-rwx------ 1 susmita-roy susmita-roy    28 Aug 21 02:18  JesusIsGod
-rwx------ 1 susmita-roy susmita-roy    13 Aug 11 00:24  JesusIsLord
-rw-rw-r-- 1 susmita-roy susmita-roy  1980 Aug 15 18:44 'ls file'
lrwxrwxrwx 1 susmita-roy susmita-roy     5 Aug 10 00:16  Messiah -> Jesus
-rw-rw-r-- 1 susmita-roy susmita-roy    98 Aug 10 15:27  Mknod_test.c
-rw-rw-r-- 1 susmita-roy susmita-roy   221 Aug 10 17:28  openFile2.c
-rw-rw-r-- 1 susmita-roy susmita-roy   219 Aug 10 17:26  openFile.c
prwxrwxr-x 1 susmita-roy susmita-roy     0 Aug 10 15:29  pipe1
-rw-rw-r-- 1 susmita-roy susmita-roy   348 Aug 30 09:39  :q
-rw-rw-r-- 1 susmita-roy susmita-roy   141 Aug 10 20:58  ReadWrite.c
-rwxr--r-- 1 susmita-roy susmita-roy    24 Aug 30 17:26  record.txt
-rw-rw-r-- 1 susmita-roy susmita-roy   212 Aug 10 00:16  SoftLink.c
-rw-rw-r-- 2 susmita-roy susmita-roy    91 Aug 10 01:03  Yeshua

*/
