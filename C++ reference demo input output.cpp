#include <stdio.h>
void input(int*&ar,int &n){
	printf("Number of elements: ");
	scanf("%d", &n);
	ar=new int[n]; 
	for (int i=0; i<n; i++){
		printf("Element %d: ",i);
		scanf("%d", &ar[i]);
	}
}
void output(int *ar, int n){
	for (int i=0; i<n; i++) printf ("%5d", ar[i]);
}
int main(){
	int *a=NULL, n;
	printf("Enter an array of integers: \n");
	input(a,n);
	printf("Values inputted: \n");
	output(a,n);
	delete a;
	getchar();
	getchar();
	return 0;
}
