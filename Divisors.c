#include <stdio.h>
#include <stdlib.h>
void printDivisors(int n)
{int i;
for (i=1;i<=n/2;i++)
	if (n%i==0) printf("%d ",i);
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,i;
	printf("\nInput n="); scanf("%d",&n);
	printDivisors(n);
	printf("\nInput n="); scanf("%d",&n);
	printDivisors(n);
	printf("\nInput n="); scanf("%d",&n);
	printDivisors(n);
	getchar();
	getcchar();
	return 0;
}
