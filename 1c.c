/**Name : 1c.c
Author : Susmita Roy
 Create the following types of a files using (i) shell command (ii) system call
c. FIFO (mkfifo Library Function or mknod system call)
*/


#include<stdio.h>
#include<sys/stat.h>
int main(){
mknod("pipe1",S_IFIFO|0777, 0);
	return 0;
	
}
/*
 * output
 ls -l  pipe1
prwxrwxr-x 1 susmita-roy susmita-roy 0 Aug 10 15:29 pipe1
shell command
mkfifo pip2
prw-rw-r-- 1 susmita-roy susmita-roy 0 Aug 31 18:05 pipe2

*/
