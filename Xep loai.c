#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double dtb;
	system ("cls");
	do {
		printf("Nhap diem trung binh (nhap -1 de thoat): ");
		scanf("%lf",&dtb);
		if(dtb==-1) printf("Tam biet!\n");
		if (dtb>=8.5)
		{
			printf("Hoc sinh gioi");
		}
		else if (dtb>=6.5)
		{
			printf("Hoc sinh tien tien");
		}
			else if (dtb>=5)
				{
					printf("Hoc sinh trung binh");
				}
				else if (dtb>=3)
				{
					printf("Hoc sinh yeu");
				}
					else if(dtb>=0)
					{
						printf("Hoc sinh kem");
					}
		printf("\n");
		system("pause");
		system("cls");
		}
	while(dtb>-1 && dtb<=10);
	getch();
	return 0;
}
