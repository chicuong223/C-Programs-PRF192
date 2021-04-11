void calculate(){
	int num1, num2;
	char pro;
	printf("Enter procedure: ");
	scanf("%d %c %d", &num1, &pro, &num2);
	switch(pro){
		case '+': printf("%d\n", num1+num2); break;
		case '-': printf("%f\n", num1-num2); break;
		case '*': printf("%d\n", num1*num2); break;
		case '/':
			if(num2==0) printf("Math ERROR\n");
			else printf("%lf\n", num1/num2); 
			break;
		case '^': printf("%d\n", pow(num1,num2)); break;
		case '%': printf("%d\n",num1%num2); break;
		default: printf("syntax ERROR\n"); break;
	}
}
