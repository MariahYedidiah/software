/*Name : 1a.c
Author : Susmita Roy
 Create the following types of a files using (i) shell command (ii) system call
a. soft link (symlink system call)
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	symlink("Jesus","Messiah");//if 2nd argument already exists as some other filename in the directory,the softlink won't be created
	return 0;
}
//ls -l Jesus Messiah
/*
 output
-rw-rw-r-- 2 susmita-roy susmita-roy 91 Aug 10 01:03 Jesus
lrwxrwxrwx 1 susmita-roy susmita-roy  5 Aug 10 00:16 Messiah -> Jesus
*/
//using shell command
//ln -s God Yahweh
/*
 output
-rw-rw-r-- 1 susmita-roy susmita-roy 0 Aug 31 17:45 God
lrwxrwxrwx 1 susmita-roy susmita-roy 3 Aug 31 17:45 Yahweh -> God

*/

