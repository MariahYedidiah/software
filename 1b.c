/*Name : 1b
Author : Susmita Roy
 Create the following types of a files using (i) shell command (ii) system call

b. hard link (link system call)
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{   

	link("Jesus","Yeshua");
	return 0;
}
/*
 output
ls -l Jesus Yeshua
-rw-rw-r-- 2 susmita-roy susmita-roy 91 Aug 10 01:03 Jesus
-rw-rw-r-- 2 susmita-roy susmita-roy 91 Aug 10 01:03 Yeshua

ln God Elohim
susmita-roy@susmita-roy-Dell-G15-5530:~/Trial$ ls -l God Elohim
-rw-rw-r-- 2 susmita-roy susmita-roy 0 Aug 31 17:45 Elohim
-rw-rw-r-- 2 susmita-roy susmita-roy 0 Aug 31 17:45 God



*/
