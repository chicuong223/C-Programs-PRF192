#include<stdio.h>
double getDouble(double a, double b){
	double i,rc;
		printf("Enter a number between %lf and %lf: ",a,b);
		rc=scanf("%lf",&i);
		if (rc!=1) printf("\aError");
		else if(i<a || i>b) printf("\aError");
		else printf("You inputted: %lf",i);
		return i;
}
int main(){
	double x,min,max;
	min = 1;
	max = 9000;
	getDouble(min,max);
	getchar();
}
