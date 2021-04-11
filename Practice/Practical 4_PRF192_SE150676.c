/*PRACTICAL 4:
Develop a C-program that helps user managing an 1-D array of real numbers(maximum of 100 elements) using the following simple menu:
1- Add  a value
2- Search a value
3- Print out the array 
4- Print out values in a range (minVal<=value<=maxVal, minVal and maxVal are inputted)
5- Print out the array in ascending order (positions of elements are preserved)
Others- Quit
*/

#include <stdio.h>
#include <stdlib.h>
#define MAXN 100

int menu(){
	int choice;
	printf("\n1-D array");
	printf("\n1 - Add a value");
	printf("\n2 - Search a value");
	printf("\n3 - Print out the array");
	printf("\n4 - Print out values in a range");
	printf("\n5 - Print out the array in ascending order");
	printf("\nOthers - Quit");
	printf("\nSelect an operation: "); scanf("%d",&choice);
	return choice;
}

void add(double value, int*a, int*pn){
	a[*pn] = value;
	(*pn)++;
}

int search(double x, int*a, int n){
	int i;
	for(i==0; i<n; i++) if (a[i]==x) return i;
	return -1;
}

void print(int*a, int n){
	int i;
	for (i==0; i<n; i++) printf("%d ", a[i]);	
}

void printvalueinrange(int*a, int n)
{   int i, minVal, maxVal;
    printf("Enter minimum value:");
    scanf("%d", &minVal);
    printf("Enter maximum value:");
    scanf("%d", &maxVal);
    for(i=0; i<n; i++)
    if(a[i]>=minVal && a[i]<=maxVal) printf("%4d", a[i]);
}

void printAsc(int *a, int n){
	int** adds = (int**)calloc(n, sizeof(int*));
	int i,j;
	for(i=0; i<n; i++) adds[i]=&a[i];
	int *t;
	for (i=0; i<n-1; i++)
		for (j=n-1; j>i; j--)
			if(*adds[j]<*adds[j-1]){
				t=adds[j];
				adds[j]=adds[j-1];
				adds[j-1]=t;
			}
	for (i=0; i<n; i++) printf("%4d", *adds[i]);
	free(adds);
}

int main(){
	int a[MAXN];
	int n=0;
	double value;
	int select;
	printf("PRACTICAL 4");
	do{
		select=menu();
		switch(select){
			case 1: printf("Enter a value: ");
					scanf("%lf", &value);
					add(value,a,&n);
					printf("Added\n");
					break;
			case 2: printf("Enter the value you want to search: ");
					scanf("%lf", &value);
					int pos=search(value,a,n);
					if (pos<0) printf("Not found!\n");
					else printf("Position: %d\n",pos);
					break;
			case 3: print(a,n);
					break;
			case 4: printvalueinrange(a,n);
					break;
			case 5: printAsc(a,n);
					break;
			default: printf("\aGoodbye.\n");
					 break;
		}
	}
	while(select>=1 && select<6);
	getchar();
}
