#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>
#include<stdlib.h>

int main()
{
	
	FILE *fptr;
	pid_t = getpid();
	fptr = fopen("file.txt","w+");
	char buf[100];
	int a;
	scanf("%d",&a);
	for(i = 1; i<=10; i++)
	{
		fork();
		sprintf(buf,"The process with the PID=%d",getpid());
		write(1,buf,strlen(buf));
	}
	
	pid = wait(&status);
	return 0;

}
