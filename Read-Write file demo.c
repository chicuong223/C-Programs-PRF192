#include <stdio.h>
#include <ctype.h>
#define TRUE 1
#define FALSE 0
/*Chech whether the file existed or not*/
int exist(char *filename){
	int existed=FALSE;
	/*Try opening it for reading*/
	FILE* f=fopen(filename, "r");
	if (f!=NULL){
		existed=TRUE;
		fclose(f);
	}
	return existed;
} 

/*Write a file from character inputted until CTRL+Z is pressed*/
int writeFile(char* filename){
	char c;/*inputted character*/
	int CTRL_Z=-1;
	if (exist(filename)==TRUE){
		printf("The file %s existed, Override it Y/N ?: ", filename);
		if (toupper(getchar())=='N') return FALSE;
	}
	/*open the file for writing*/
	FILE* f=fopen(filename, "w");
	fflush(stdin);
	do{
		c=getchar(); /*get a character*/
		if (c!=CTRL_Z) fputc(c,f); /*Write it to file*/
	}
	while (c!=CTRL_Z);
	fclose(f);
	return TRUE;
}

int main(int argCount, char* args[]){
	if(argCount!=2) printf("Syntax: copy_con filename\n");
	else if (writeFile(args[1])==TRUE)
			printf("Writing the file %s: done\n", args[1]);
		else printf("Can not write the file %s\n", args[1]);
	return 0;
}
