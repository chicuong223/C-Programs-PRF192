#include <stdio.h>
#include <math.h>
#include "linearFunc.c"
#include "quaFunc.c"
#include "Shape.c"
#include "calculate.c"
#include "biquaFunc.c"

int main(){
	int choice;
	do{	
		system("cls");
		printf("* * * * * * * * * * * * * * * * * * * * * * *\n");
		printf("*	A SIMPLE CALCULATING PROGRAM	    *\n");
		printf("* * * * * * * * * * * * * * * * * * * * * * *\n");
		printf("*	1. Linear function		    *\n");
		printf("*	2. Quadratic function		    *\n");
		printf("*	3. Calculate shape		    *\n");
		printf("*	4. Perform a calculation  	    *\n");
		printf("*	5. Biquadratic function		    *\n");
		printf("*					    *\n");
		printf("* * * * * * * * * * * * * * * * * * * * * * *\n");
		printf("Choice: "); scanf("%d", &choice);
		switch(choice){
			case 1:
				system("cls");
				linearFunc();
				system("pause");
				break;
			case 2:
				system("cls");
				quaFunc();
				system("pause");
				break;	
			case 3:
				system("cls");
				Cal();
				break;
			case 4:
				system("cls");
				calculate();
				system("pause");
				break;
			case 5:
				system("cls");
				biquaFunc();
				system("pause");
				break;
		}
	}while(choice>=1 && choice <=5);
	return 0;
}
