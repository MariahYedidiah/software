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
