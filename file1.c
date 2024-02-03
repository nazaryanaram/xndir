#include <stdio.h>
#include <unistd.h>

int main()
{
	printf("Running program 1\n");
	execl("./file2", NULL);
	printf("text");
}
