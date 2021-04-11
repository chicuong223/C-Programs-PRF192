#include <stdio.h>
void processFile(char* fname, int*pCount, double* pSum){
	FILE* f=fopen(fname, "r");
	*pCount = 0; /*reset count*/
	*pSum = 0; /*reset sum */
	double x; /*Variable containing a value from file*/
	while (fscanf(f, "%lf", &x)==1){
		(*pCount)++;
		(*pSum)+=x;
	}
	fclose(f);
}
int main(){
	char infName[]="array3.txt";
	int count =0; /*Number of values in the file*/
	double sum=0; /*Sum of values in the file*/
	processFile(infName, &count, &sum);
	printf("Number of values in the file: %d\n", count);
	printf("Average of vaues in the file: %lf\n", sum/count);
	getch();
	return 0;
}
