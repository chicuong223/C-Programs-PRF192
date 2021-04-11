#include <stdio.h>
#include <stdlib.h>
#include "myfunc.c"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	printf("Input a positive integer:"); scanf("%d",&n);
	if (isPrime(n)==1) printf("%d is a prime.\n",n);
	else printf("%d is not a prime.\n",n);
	getchar();
	getchar();
	
}

