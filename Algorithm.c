#include <stdio.h>
int main(){
	int N;
	do{
		printf("N = "); scanf("%d",&N);
		int x = -N*N;
		int i;
		for(i=1; i<(3*N+1); i++){
			x = x + 2*i -1;
			printf("%d\n", x);
		}
		system("pause");
		system("cls");
	}
	while(N!=0);
	getch();
	return 0;
}
