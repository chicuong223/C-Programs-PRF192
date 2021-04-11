#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x,y;
	printf("Enter x: "); scanf("%d",&x);
	printf("Enter y: "); scanf("%d",&y);
	printf("Tong = %d",x+y);
	printf("\nHieu = %d",x-y);
	printf("\nTich = %d",x*y);
	if (y==0)
		{printf("\nError");
		}
	else {
		printf("\nThuong = %d",x/y);
		printf("\nModulo = %d", x%y);
	}
	getch();
	return 0;
}
