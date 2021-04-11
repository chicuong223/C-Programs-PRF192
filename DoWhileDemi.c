#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int sum;
	sum==0;
	do
	{printf("Enter x :");
	scanf("%d",&x);
	sum+=x;
	}
	while (x!=0);
	printf("sum = %d",sum);
	return 0;
}
