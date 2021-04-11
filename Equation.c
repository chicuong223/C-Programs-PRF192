#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Giai phuong-trinh bac 1 va bac 2*/

int main() {
	double a,b,c,delta;
	printf("a*(x^2) + b*x + c = 0\n");
	printf("a = "); scanf("%lf",&a);
	printf("b = "); scanf("%lf",&b);
	printf("c = "); scanf("%lf",&c);
	if (a==0)
		{if (b==0)
			{if (c==0)
				{printf("All\n");
				}
			else
				{printf("No solutions\n");
				}
			}
	 	else
	 		{printf("x = %0.2lf\n",-c/b);
			 }	
		}
	else
		{delta=b*b-4*a*c;
	 	if (delta>=0)
	 		{if (delta==0)
	 			{printf("x = %0.2lf\n",(-b)/(2*a));
			 	}
		 	else
		 		{printf("x1 = %0.2lf",((-b)+sqrt(delta))/(2*a));
		 	 	 printf("\nx2 = %0.2lf\n",((-b)-sqrt(delta))/(2*a));
			 	}
		 	}	
	 	else
	 		{printf("No solutions\n");
		 	}
		}
	getchar();
	return 0;
}
