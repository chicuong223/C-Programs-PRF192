#define PI 3.141592654

float p;
float a;
void rectangle(float l, float w){
	a = l*w;
	p = 2*(l+w);
	printf("Perimeter: %f\n", p);
	printf("Area: %f\n", a);
}

void circle(float r){
	p = PI*2*r;
	a = PI*r*r;
	printf("Perimeter: %f\n", p);
	printf("Area: %f\n", a);
}

void rhombus(float s, float d1, float d2){
	p = 4*s;
	a = (d1*d2)/2;
	printf("Perimeter: %f\n", p);
	printf("Area: %f\n", a);
}

void equiTriangle(float s){
	p = 3*s;
	a = s*s*sqrt(3)/4;
	printf("Perimeter: %f\n", p);
	printf("Area: %f\n", a);
}

void Cal(){
	int cho;
	do{
		system("cls");
		printf("1. Rectangle\n");
		printf("2. Circle\n");
		printf("3. Rhombus\n");
		printf("4. Equilateral Triangle\n");
		printf("Choice: "); scanf("%d", &cho);
		switch(cho){
			case 1: ;
				float l,w;
				do{
					system("cls");
					printf("Length: "); scanf("%f", &l);
					printf("Width: "); scanf("%f", &w);
					if(l<0 || w<0 || l<w) {
						system("cls");
						printf("Math ERROR\n");
						system("pause");
					}
				}while(l<w || l<0 || w<0);
				rectangle(l,w);
				system("pause");
				break;
			case 2: ;
				float r;
				do{
					system("cls");
					printf("Radius: "); scanf("%f", &r);
					if(r<0) {
						system("cls");
						printf("Math ERROR\n");
						system("pause");
					}
				}while(r<0);
				circle(r);
				system("pause");
				break;
			case 3: ;
				float s, d1, d2;
				do{
					system("cls");
					printf("Sides: "); scanf("%f", &s);
					printf("Diagonal 1: "); scanf("%f", &d1);
					printf("Diagonal 2: "); scanf("%f", &d2);
					if(s<0 || d1<0 || d2<0) {
						system("cls");
						printf("Math ERROR\n");
						system("pause");
					}
				}while(s<0 || d1<0 || d2<0);
				rhombus(s, d1, d2);
				system("pause");
				break;
			case 4: ;
				float v;
				do{
					system("cls");
					printf("Vertices: "); scanf("%f", &v);
					if(v<0){
						system("cls");
						printf("Math ERROR\n");
						system("pause");
					}
				}while(v<0);
				equiTriangle(v);
				system("pause");
				break;
		}
	}while(cho>=1 && cho<=4);
}
