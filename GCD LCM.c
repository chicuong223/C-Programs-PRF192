#include <stdio.h>
/* Calculate the greatest common divisor of two integers*/
int gcd(int value1, int value2)
{	while (value1!=value2)
		if (value1>value2) value1 -= value2;
		else value2 -= value1;
	return value1;
}
/*Calculate the least common multiples of two integers*/
int lcm(int value1, int value2)
{	return (value1*value2)/gcd(value1,value2);
}
int main()
{	int m,n,L,G;
	do
	{	printf("Input 2 positive integers: ");
		scanf("%d%d",&m,&n);
	}
	while (m<=0 || n<=0);
	G=gcd(m,n);
	L=lcm(m,n);
	printf("GCD: %d, LCM: %d\n", G, L);
	getchar();
	getchar();
	return 0;
}
