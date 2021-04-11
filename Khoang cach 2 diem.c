/*Chuong-trinh tinh khoang-cach giua 2 diem tren mot mat phang Oxy
@Tac-gia: Tang-Chi-Cuong
 Ngay viet: 25/05/2020
*/

#include <stdio.h>
#include <math.h>
typedef struct{
	double x, y;
}pnt;
pnt point[2];
//Ham nhap
void nhap(double* x, double* y){
	printf("Hoanh do x = "); scanf("%lf", x);
	printf("Tung do y = "); scanf("%lf", y);
}
//Gan x, y vao diem
void gan(double x, double y, int *n){
	point[*n].x = x;
	point[*n].y = y;
	(*n)++;
}

//Ham tinh khoang cach
double distance(pnt p2){
	int i;
	return sqrt((p2.x - point[i].x)*(p2.x - point[i].x) + (p2.y - point[i].y)*(p2.y - point[i].y));
}

void main(){
	double x, y;
	int n = 0;
	printf("Nhap toa-do diem 1\n");
	nhap(&x, &y);
	gan(x, y, &n);
	printf("Nhap toa-do diem 2\n");
	nhap(&x, &y);
	gan(x, y, &n);
	printf("Khoang-cach: %lf\n", distance(point[1]));
	getch();
}
