#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	do {printf("Nhap vao so n: ");
		scanf("%d",&n);
	}
	while (n<1 || n>12);
	switch(n)
	{case 1:printf("January");
			break;
	 case 2:printf("February");
	 		break;
	 case 3:printf("March");
	 		break; 
	 case 4:printf("April");
	 		break;
	 case 5:printf("May");
	 		break;
	 case 6:printf("June");
	 		break;   
	 case 7:printf("July");
	 		break; 
	 case 8:printf("August");
	 		break; 
	 case 9:printf("September");
	 		break; 
	 case 10:printf("October");
	 		break; 
	 case 11:printf("November");
	 		break; 
	 case 12:printf("December");
	 		break; 
	}
	getch();
	return 0;
}
