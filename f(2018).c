#include <stdio.h>
int main(){
	
	int n;
	int i;
	int f[5000];
	do{	
		printf("f(n) = -f(n-3)\n");
		printf("f(0) = 1, f(1) = 4, f(2) = 6\n");
		printf("Enter 0 to quit\n");
		printf("n = "); scanf("%d", &n);
		f[0]=1;
		f[1]=4;
		f[2]=6;
		for(i=3; i<n; i++){
			f[i]= -f[i-3];
		}
		for(i=0; i<n; i++){
			printf("f(%d) = %d\n",i, f[i]);
		}
		system("pause");
		system("cls");
	}while(n>0);
	return 0;
}
