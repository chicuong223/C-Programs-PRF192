#include <stdio.h>

int main(){
	int n, i;
	unsigned long long int a=0, b=1, show=0;
	printf("* * * * * * * * * * * * * * * * * * * * * * * *\n");
	printf("* Find the nth element of Fibonacci sequence  *\n");
	printf("* * * * * * * * * * * * * * * * * * * * * * * *\n");
	printf("\nn = ");
	scanf("%d", &n);
	printf("%d\n%d\n", a, b);
	for(i=0; i<n-2; i++){
		show=a+b;
		a=b;
		b=show;
		printf("%llu\n",show);	
	}

	getch();
	return 0;
}
