void quaFunc(){
	float a,b,c,d;
	printf("ax^2 + bx + c = 0\n");
	do{
		printf("a = "); scanf("%f", &a);
		if(a==0) printf("a cannot equals to 0\n");
	}while(a==0);
	printf("b = "); scanf("%f", &b);
	printf("c = "); scanf("%f", &c);
	d = b*b - 4*a*c;
	if(d<0) printf("No solutions\n");
	else if(d==0) printf("x = %lf\n", -b/(2*a));
	else {
		printf("x1 = %lf\n", (-b+sqrt(d))/(2*a));
		printf("x2 = %lf\n", (-b-sqrt(d))/(2*a));
	}
}
