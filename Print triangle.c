#include <stdio.h>
int printTriangle(int size){
	int i, j, starCount=0;
	for (i=0; i<size; i++){
		for(j=0; j<=i; j++){
			printf("*");
			starCount++;
		}
		printf("\n");
	}
	return starCount;
}
int main(void){
	int numStars, h;
	do{
		printf("Enter the height of the triangle (press 0 to quit): ");
		scanf("%d", &h);
		printf("Triangle with height = %d\n", h);
		numStars = printTriangle(h);
		printf("Number of stars: %d\n\n", numStars);
	}while(h>0);
	return 0;
}
