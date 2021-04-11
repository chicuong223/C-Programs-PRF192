double dE0(float a, float b){
	return -b/(2*a);
}

double dB01(float a, float b, float d){
	return (-b+sqrt(d))/(2*a);
}

double dB02(float a, float b, float d){
	return (-b-sqrt(d))/(2*a);
}

void biquaFunc(){
	printf("ax^4 + bx^2 + c = 0\n");
	float a,b,c,d;
	do{
		printf("a = "); scanf("%f", &a);
		if(a==0) printf("a cannot equals to 0\n");
	}while(a==0);
	printf("b = "); scanf("%f", &b);
	printf("c = "); scanf("%f", &c);
	d = b*b - 4*a*c;
	if(d<0) printf("No solutions\n");
	else if(d==0) {
		double x = dE0(a,b);
		if(x>=0){
			printf("x1 = %lf\n", sqrt(x));
			printf("x2 = %lf\n", -sqrt(x));                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
		}
		else printf("No solutions\n");
	}
	else {
		float xs1 = dB01(a,b,d);
		float xs2 = dB02(a,b,d);
		if(xs1<0 && xs2<0) printf("No solutions\n");
		if(xs1<0 && xs2>0){
			printf("x1 = %lf\n", sqrt(xs2));
			printf("x2 = %lf\n", -sqrt(xs2));
		}
		if(xs1>0 && xs2<0){
			printf("x1 = %lf\n", sqrt(xs1));
			printf("x2 = %lf\n", -sqrt(xs1));
		}
		if(xs1>0 && xs2>0){
			printf("x1 = %lf\n", sqrt(xs1));
			printf("x2 = %lf\n", -sqrt(xs1));
			printf("x3 = %lf\n", sqrt(xs2));
			printf("x4 = %lf\n", -sqrt(xs2));
		}
	}
}
