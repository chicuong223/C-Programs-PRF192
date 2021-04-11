/* doc va viet mot file text*/
#include <stdio.h>
#include <conio.h>
void WriteFile(FILE * f)
{
	char c;
	printf("Nhap du lieu:\n");
	do
	{
		c = getchar();
		fputc(c,f);
	}while(c != '\n');
	fclose(f);
}
void ReadFile(FILE * f)
{
	char c;
	while(feof(f)==0)
	{
		c = fgetc(f);
		printf("%c",c);
	}
	fclose(f);
}

int main()
{
	char filename[] = "D:\\Study Materials\\PRF\\data.txt";
	char c;
	FILE* f;

	f = fopen(filename,"a");
	WriteFile(f);
	getch();
	printf("-------********---------\n");

	f = fopen(filename,"rt");
	ReadFile(f);
}
