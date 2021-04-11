#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n=15;
	int S=0;
	int i=1;
	while (i<2*n)
	{	S+=i;
		i*=4;
	}
	printf("%d",S);
	return 0;
}
