#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char c1,c2,c,t;
	int d;
	printf("c1 = ");
	scanf("%c",&c1); getchar();
	printf("c2 = ");
	scanf("%c",&c2); getchar();
	if (c1>c2)
		{t=c1; c1=c2; c2=t;
		}
	d=c2-c1;
	printf("d = %d\n",d);
	for (c=c1; c<=c2;c++)
		{printf("%c: %d,%o,%X\n",c,c,c,c);
		}
	return 0;
}
