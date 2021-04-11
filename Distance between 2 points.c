#include <stdio.h>
#include <math.h>

int main(){
	double x1, y1, x2, y2;
	printf("Enter coordinations of point 1\n");
	printf("x = "); scanf("%lf", &x1);
	printf("y = "); scanf("%lf", &y1);
	printf("Enter coordinations of point 2\n");
	printf("x = "); scanf("%lf", &x2);
	printf("y = "); scanf("%lf", &y2);
	printf("Distance: %lf\n", sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)));
	getch();
	return 0;
}
