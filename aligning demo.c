# include <stdio.h>
# include <conio.h>
main(){
	int n;
	long lo;
	char ch;
	double d;
	printf("Input an integer, a long number, a character, ");
	printf("and a double number: (use blank)");
	scanf("%d %ld %c %lf", &n, &lo, &ch, &d);
	printf("%-20s: %10d%15ld%5c%12.6lf\n", "The inputted values are",n,lo,ch,d);
	getch();
}
