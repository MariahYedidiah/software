//name 26.c
//author Susmita Roy
/*26. Write a program to execute an executable program.
a. use some executable program
b. pass some input to an executable program. (for example execute an executable of $./a.out name)*/
#include<stdio.h>
#include<unistd.h>
int main(void)
{execl("/bin/ls","ls","-la",NULL);

	return 0;

}
/*output
 * total 344
drwxrwxr-x  3 susmita-roy susmita-roy  4096 Aug 31 19:14  .
drwxr-x--- 22 susmita-roy susmita-roy  4096 Aug 31 19:13  ..
-rw-rw-r--  1 susmita-roy susmita-roy  1010 Aug 31 18:37  10a.c
-rw-rw-r--  1 susmita-roy susmita-roy   409 Aug 31 18:21  10b
-rw-r--r--  1 susmita-roy susmita-roy 12288 Aug 22 14:53  .10.c.swo
-rw-------  1 susmita-roy susmita-roy 12288 Aug 16 01:04  .10.c.swp
-rw-rw-r--  1 susmita-roy susmita-roy   287 Aug 29 10:24  11a.c
-rw-r--r--  1 susmita-roy susmita-roy 12288 Aug 31 18:21  .11a.c.swp
-rw-rw-r--  1 susmita-roy susmita-roy   258 Aug 28 22:55  11b.c
-rw-rw-r--  1 susmita-roy susmita-roy   773 Aug 31 18:37  11.c
-rw-r--r--  1 susmita-roy susmita-roy 12288 Aug 22 14:33  .11.c.swp
-rw-rw-r--  1 susmita-roy susmita-roy   559 Aug 31 18:38  12.c
-rw-rw-r--  1 susmita-roy susmita-roy   934 Aug 31 18:42  13.c
-rw-rw-r--  1 susmita-roy susmita-roy  1356 Aug 31 18:46  14.c
-rw-rw-r--  1 susmita-roy susmita-roy   512 Aug 31 18:47  15.c
-rw-rw-r--  1 susmita-roy susmita-roy   660 Aug 31 18:50  16a.c
-rw-rw-r--  1 susmita-roy susmita-roy   762 Aug 31 18:52  16b.c
-rw-rw-r--  1 susmita-roy susmita-roy   632 Aug 31 18:54  17_1.c
-rw-rw-r--  1 susmita-roy susmita-roy  1079 Aug 31 18:59  17_2.c
-rw-rw-r--  1 susmita-roy susmita-roy  1426 Aug 31 19:02  18.c
-rw-rw-r--  1 susmita-roy susmita-roy   376 Aug 30 15:28  18_initialize.c
-rw-rw-r--  1 susmita-roy susmita-roy   575 Aug 31 19:04  19.c
-rw-rw-r--  1 susmita-roy susmita-roy   710 Aug 31 18:07  1a.c
-rw-rw-r--  1 susmita-roy susmita-roy   609 Aug 31 18:07  1b.c
-rw-rw-r--  1 susmita-roy susmita-roy   447 Aug 31 18:07  1c.c
-rw-rw-r--  1 susmita-roy susmita-roy   157 Aug 31 17:21  20b.c
-rw-rw-r--  1 susmita-roy susmita-roy   653 Aug 31 19:07  20.c
-rw-rw-r--  1 susmita-roy susmita-roy   230 Aug 31 09:28  21_b.c
-rw-rw-r--  1 susmita-roy susmita-roy   892 Aug 31 19:09  21.c
-rw-rw-r--  1 susmita-roy susmita-roy  1838 Aug 31 19:09  22.c
-rwxr--r--  1 susmita-roy susmita-roy    47 Aug 31 08:58  22_output.txt
-rw-rw-r--  1 susmita-roy susmita-roy  1139 Aug 31 19:11  23.c
-rw-rw-r--  1 susmita-roy susmita-roy   678 Aug 31 19:12  24.c
-rw-rw-r--  1 susmita-roy susmita-roy   800 Aug 31 19:13  25.c
-rw-rw-r--  1 susmita-roy susmita-roy   101 Aug 31 11:26  26.c
-rw-r--r--  1 susmita-roy susmita-roy 12288 Aug 31 19:14  .26.c.swp
-rw-rw-r--  1 susmita-roy susmita-roy  4073 Aug 31 12:03  27_a.c
-rw-rw-r--  1 susmita-roy susmita-roy  4227 Aug 31 12:04  27_b.c
-rw-rw-r--  1 susmita-roy susmita-roy  4883 Aug 31 12:04  27_c.c
-rw-rw-r--  1 susmita-roy susmita-roy   985 Aug 31 12:04  27_d.c
-rw-rw-r--  1 susmita-roy susmita-roy   991 Aug 31 12:02  27_e.c
-rw-rw-r--  1 susmita-roy susmita-roy  1397 Aug 31 15:28  28.c
-rw-rw-r--  1 susmita-roy susmita-roy  2298 Aug 31 15:27  29.c
-rw-rw-r--  1 susmita-roy susmita-roy  6155 Aug 31 18:06  2.c
-rw-rw-r--  1 susmita-roy susmita-roy   298 Aug 31 10:16  30.c
-rw-rw-r--  1 susmita-roy susmita-roy   386 Aug 31 18:07  3.c
-rw-rw-r--  1 susmita-roy susmita-roy   381 Aug 31 18:06  4.c
-rw-rw-r--  1 susmita-roy susmita-roy  1403 Aug 31 18:06  5.c
-rw-rw-r--  1 susmita-roy susmita-roy   347 Aug 31 18:09  6.c
-rw-rw-r--  1 susmita-roy susmita-roy   470 Aug 31 18:10  7.c
-rw-rw-r--  1 susmita-roy susmita-roy  1128 Aug 31 18:12  8.c
-rw-rw-r--  1 susmita-roy susmita-roy  1208 Aug 31 18:18  9.c
---x------  1 susmita-roy susmita-roy     0 Aug 31 17:10 'Amazing grace'
--w-------  1 susmita-roy susmita-roy     0 Aug 10 17:28 'Amazing grace2'
-rwxrwxr-x  1 susmita-roy susmita-roy 15960 Aug 31 19:14  a.out
-rw-rw-r--  1 susmita-roy susmita-roy   156 Aug 10 16:21  creatFile.c
-rwxr--r--  1 susmita-roy susmita-roy     4 Aug 31 18:55  dbfile
-rw-rw-r--  2 susmita-roy susmita-roy     0 Aug 31 17:45  Elohim
-rwx------  1 susmita-roy susmita-roy    60 Aug 31 18:35  Emmanuel
drwxrwxr-x  8 susmita-roy susmita-roy  4096 Aug 22 20:10  .git
-rw-rw-r--  2 susmita-roy susmita-roy     0 Aug 31 17:45  God
prw-rw-r--  1 susmita-roy susmita-roy     0 Aug 10 01:07  Grace
-rwx------  1 susmita-roy susmita-roy    13 Aug 11 00:23  GraceAndTruth
prwxr--r--  1 susmita-roy susmita-roy     0 Aug 10 01:06  Grace_myfifo
-rw-rw-r--  1 susmita-roy susmita-roy    71 Aug  9 23:40  HelloWorld.c
-rwxr--r--  1 susmita-roy susmita-roy     0 Aug 31 17:29  inf1
-rwxr--r--  1 susmita-roy susmita-roy     0 Aug 31 17:29  inf2.c
-rwxr--r--  1 susmita-roy susmita-roy     0 Aug 31 17:29  inf3.c
-rwxr--r--  1 susmita-roy susmita-roy     0 Aug 31 17:29  inf4.c
-rwxr--r--  1 susmita-roy susmita-roy     0 Aug 31 17:29  inf5.c
-rw-rw-r--  1 susmita-roy susmita-roy    53 Aug 31 17:31  InfLoop.c
-rwx------  1 susmita-roy susmita-roy    50 Aug 31 18:38  Isaiah54
-rw-rw-r--  2 susmita-roy susmita-roy    91 Aug 10 01:03  Jesus
-rwx------  1 susmita-roy susmita-roy    28 Aug 31 16:48  JesusIsGod
-rwx------  1 susmita-roy susmita-roy    28 Aug 31 16:50  JesusIsLord
-rw-rw-r--  1 susmita-roy susmita-roy  1980 Aug 15 18:44 'ls file'
lrwxrwxrwx  1 susmita-roy susmita-roy     5 Aug 10 00:16  Messiah -> Jesus
prwxrwxr-x  1 susmita-roy susmita-roy     0 Aug 10 15:29  pipe1
prw-rw-r--  1 susmita-roy susmita-roy     0 Aug 31 18:05  pipe2
-rw-rw-r--  1 susmita-roy susmita-roy   685 Aug 31 16:45  Psalm1.txt
-rw-rw-r--  1 susmita-roy susmita-roy   747 Aug 31 17:47  :q
-rw-rw-r--  1 susmita-roy susmita-roy   141 Aug 31 16:54  ReadWrite.c
-rwxr--r--  1 susmita-roy susmita-roy    24 Aug 31 19:01  record.txt
lrwxrwxrwx  1 susmita-roy susmita-roy     3 Aug 31 17:45  Yahweh -> God
-rw-rw-r--  2 susmita-roy susmita-roy    91 Aug 10 01:03  Yeshua
*/
