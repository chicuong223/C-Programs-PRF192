#include<stdio.h>

int main(){
	int l,h,i,j,y,c;
	do{
		printf("Enter the low end of the range: "); scanf("%d",&l);
		printf("Enter the high end of the range: "); scanf("%d",&h);
	}
	while (l>h);
	for (i=l;i<=h;i++){
		printf("\t%d",i);
	}
	for (j=l;j<=h;j++){
		printf("\n\n%d",j);
		for(i=l;i<=h;i++){
			printf("\t%d",i*j);
		}
	}
	
	getch();
	return 0;
}
