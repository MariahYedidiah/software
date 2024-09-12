//Name 8.c
//Author Susmita Roy
//Write a program to open a file in read only mode, read line by line and display each line as it is read.
//Close the file when end of file is reached.

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(void)
{
	char buff[30];
	int fd=open("Psalm1.txt",O_RDONLY);
	while(read(fd,buff,1))
	{
		if(buff[0]=='\n')
			getchar();
		else
			printf("%c",buff[0]);
	}
	close(fd);

	return 0;
}
/*
 output

 1 Blessed is the man
Who walks not in the counsel of the ungodly,
Nor stands in the path of sinners,
Nor sits in the seat of the scornful;
2
But his delight is in the law of the Lord,
And in His law he [b]meditates day and night.
3
He shall be like a tree
Planted by the [c]rivers of water,
That brings forth its fruit in its season,
Whose leaf also shall not wither;
And whatever he does shall prosper.

4
The ungodly are not so,
But are like the chaff which the wind drives away.
5
Therefore the ungodly shall not stand in the judgment,
Nor sinners in the congregation of the righteous.

6
For the Lord knows the way of the righteous,
But the way of the ungodly shall perish.

*/
