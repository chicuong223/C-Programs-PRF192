#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, S=0;
	int i=1;
	do
	{printf("Nhap n: ");
	scanf("%d", &n);}
	while (n>10);
	for (i=2; i<=n; i+=2)
		{
			S=S+i;
		}
	printf("S = %d",S);
	return 0;
}
