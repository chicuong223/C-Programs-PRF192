#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i=0,result;
	printf("Enter N: "); scanf("%d",&n);
	for (i; i<=n; i++){
		result=n*n-2*i;
		printf("Result = %d\n",result);}
	return 0;
}
