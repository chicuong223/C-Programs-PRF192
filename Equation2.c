#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Giai phuong-trinh bac 2*/

int main(int argc, char *argv[]) {
	double a,b,c,delta;
	printf("a*(x^2) + b*x + c = 0 (a!=0)\n");
	do {
	printf("a = "); scanf("%lf",&a);}
	while(a==0);
	printf("b = "); scanf("%lf",&b);
	printf("c = "); scanf("%lf",&c);
		{delta=b*b-4*a*c;
	 	if (delta>=0)
	 		{if (delta==0)
	 			{
	 			 printf("x = %0.2lf",-b/(2*a));
			 	}
		 	else
		 		{
		 	 	 printf("x1 = %0.2lf",(-b+sqrt(delta))/(2*a));
		 	 	 printf("\nx2 = %0.2lf",(-b-sqrt(delta))/(2*a));
			 	}
		 	}	
	 	else
	 		{printf("PT vo nghiem");
		 	}
		}
	getchar();
	return 0;
}
