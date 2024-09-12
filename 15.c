//Name 15
//Author Susmita Roy
//Write a program to display the environmental variable of the user (use environ).
#include <stdio.h>
#include <stdlib.h>

extern char **environ; 

int main() {
    char **env = environ;
   char *d="USER=";int i; 
    while (*env) { 
         
	for(i=0;i<5;i++)
		{	if(d[i]!=(*env)[i])//()important cuz of c priority rules
			break;
		}
	if(i==5)break;
//        printf("%s %d\n",*env,i);
        env++; 
    }
    printf("%s\n",*env);
    return 0;
}
//output
//USER=susmita-roy

