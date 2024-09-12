//Name 9.c
//Author Susmita Roy
/*
 9. Write a program to print the following information about a given file.
a. inode
b. number of hard links
c. uid
d. gid
e. size
f. block size
g. number of blocks
h. time of last access
i. time of last modification
j. time of last change
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
int main(int argc,char *argv[])
{struct stat sb;
	if(argc<2)
              {		printf("error");exit(1);}
	else if(stat(argv[1],&sb)==-1)
	{perror("stat() failed");
		exit(EXIT_FAILURE);

	}
	else{
		printf("inode number= %lu\n",sb.st_ino);
		printf("no. of hard links=%ld\n",sb.st_nlink);
		printf("uid =%u\n gid=%u\nsize=%ld\nblocksize=%lu\n#blocks=%ld\nlast access time=%s\nlast modification time=%s\nlastchange time=%s\n",sb.st_uid,sb.st_gid,sb.st_size,sb.st_blksize,sb.st_blocks,ctime(&sb.st_atime),ctime(&sb.st_mtime),ctime(&sb.st_ctime));
	}

	return 0;
}
/*
 output
 ./a.out Jesus
inode number= 6298084
no. of hard links=2
uid =1000
 gid=1000
size=91
blocksize=4096
#blocks=8
last access time=Sat Aug 31 16:49:35 2024

last modification time=Sat Aug 31 16:49:35 2024

lastchange time=Sat Aug 31 16:49:35 2024
*/
