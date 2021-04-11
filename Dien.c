#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double kwh;
	printf("Nhap so kwh dien : ");
	scanf("%lf",&kwh);
	if (kwh>200)
	{printf("Tien: 1550");
	}
	else if (kwh>150)
		{printf("Tien: 1350");
		}
		else if (kwh>100)
			{printf("Tien: 1250");
			}
			else
			{printf("Tien: 950");
			}
	return 0;
}
