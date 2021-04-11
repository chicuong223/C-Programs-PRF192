#include <stdio.h>
#include <math.h>
/* Function 1: Test whether a character is a vowel */
int isVowel(int c)
{	return (c=='a' || c=='A' || c=='e' || c=='E' || 
			c=='i' || c=='I' || c=='o' || c=='O' ||
			c=='u' || c=='U');
}
/* Function 2: sum divisors of an integer */
int sumDivisors(int n)
{	int S=0,i;
	for (i=1;i<=n/2;i++)
		if (n%i==0) S+=i;
	return S;
}
/* Function 3: Test whether an integer is prime or not */
int isPrime(int n)
{	int sqrtn=sqrt(n), result=1, i;
	for (i=2;i<=sqrtn && result==1; i++)
		if (n%i==0) result=0;
	return result;
}
/* Function for menu */
int menu()
{	int choice;
	printf("\n1 - Test if a character is a vowel");
	printf("\n2 - Sum of divisors");
	printf("\n3 - Test if an integer is a prime number");
	printf("\n4 - Solve an equation");
	printf("\nOthers: Quit");
	printf("\nYour choice: ");
	scanf("%d",&choice);
	return choice;
}
int main()
{	int userChoice;
	int n; /* integer inputted */
	char c; /* character inputted */
	do
	{	userChoice = menu();
		system("cls");
		switch(userChoice)
		{	case 1:	printf("Enter one character: ");
					fflush(stdin); /* clear the keyboard buffer */
					c=getchar();
					if (isVowel(c)==1) printf("It is a vowel\n");
					else printf("It is not a vowel\n");
					system("pause");
					system("cls");
					break;
			case 2: do
					{	printf("Enter a positive integer: ");
						scanf("%d",&n);
					}
					while (n<=0);
					printf("Sum of its divisors: %d\n", sumDivisors(n));
					system("pause");
					system("cls");
					break;
			case 3: printf("Enter an integer: ");
					scanf("%d",&n);
					if (isPrime(n)==1) printf("It's a prime.\n'");
					else printf("It isn't a prime.\n");
					system("pause");
					system("cls");
					break;
			case 4:(void)system("Equation.exe");
					system("pause");
					system("cls");
					break;
			default: printf("\aGoodbye!");
		}
	}
	while (userChoice>=1 && userChoice<5);
	getch();
	return 0;
}
