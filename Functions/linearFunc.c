void linearFunc(){
	float a,b;
	printf("ax + b = 0\n");
	printf("a = "); scanf("%f", &a);
	printf("b = "); scanf("%f", &b);
	if(a==0){
		if(b==0) printf("Infinite solutions\n");
		else printf("No solution\n");
	}
	else printf("x = %.2f\n", -b/a);
}
