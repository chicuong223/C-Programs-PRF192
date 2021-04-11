#include <stdio.h>
#include <stdlib.h>

void clear (void) { 
while ( getchar() != '\n' ); 
} 
int validDate(int d, int m, int y){
	int maxday=31;
	if(d<1 || d>31 || m<1 || m>12) return 0;
	if(m==4 || m==6 || m==9 || m==11) maxday=30;
	else if(m==2){
		if(y%400==0 || y%4==0 && y%100!=0) maxday=29;
		else maxday=28;
	}
	return d<=maxday;
}
int menu(){
	int choice;
	printf("\n1 - Processing a date data");
	printf("\n2 - Character data");
	printf("\n3 - Quit");
	printf("\nChoose an operation: ");
	scanf("%d",&choice);
	return choice;
}
void printASCII(char c1, char c2){
	c1 = getchar();
	c2 = getchar();
	char c;
	int t;
	if (c1>c2)
		{t=c1; c1=c2; c2=t;
		}
	for(c=c2; c>=c1; c--){
		printf("%c: %d, %x\n",c,c,c);
	}
}
int main(){
	int userchoice, day, month, year;
	char char1, char2;
	do{
	userchoice = menu();
	switch(userchoice){
		case 1: printf("Enter a date: ");
				scanf("%d%d%d", &day, &month, &year);
				if (validDate(day,month,year)) printf("Valid date");
				else printf("Invalid date");
				break;
		case 2: printf("Enter 2 characters: ");
				fflush(stdin);
				printASCII(char1,char2);
				break;
		default: printf("Goodbye!");
				 break;
		}
	}
	while (userchoice>=1 && userchoice<3);
	getchar();
}

