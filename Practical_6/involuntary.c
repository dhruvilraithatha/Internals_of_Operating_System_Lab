#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
	printf("PID : %d\n",getpid());
	unsigned int i,j;
	while(1)
	{
		j = 1;
		for(i = 1; i <= 10; i++){
			j = j*i;
		}
	}
}

