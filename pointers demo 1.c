#include <stdio.h>
int main(){
	int n=7;
	int*pn=&n;
	printf("Variables n, address: %u, value: %d",&n,n);
	printf("\nVariables pn, address: %u, value: %u",&pn,pn);
	return 0;
}
