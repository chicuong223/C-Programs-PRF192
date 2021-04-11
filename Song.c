#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct{
	char name[50], album[50], artist[30];
}song;

song listsong[MAX];
int n=0, i;
void add(char name[], char album[], char artist[], int *n){
	strcpy(listsong[*n].name, name);
	strcpy(listsong[*n].album, album);
	strcpy(listsong[*n].artist, artist);
	(*n)++;
}

void enter(char name[], char album[], char artist[]){
	printf("Enter song's info\n");
	ENTER:
	printf("Name: "); fflush(stdin); gets(name);
	printf("Album: "); fflush(stdin); gets(album);
	printf("Artist: "); fflush(stdin); gets(artist);
	if(strlen(name)>50 || strlen(album)>50 || strlen(artist)>30){
		printf("\aInvalid data inputted!\n");
		goto ENTER;
	}
}

void printSong(song list){
	printf("%d. %-40s\t%-40s\t%-40s\n", list.name, list.album, list.artist);
}

int searchSong(song list[], char name[]){
	int found=0;
	for(i=0; i<=n; i++){
		if(strcmp(list[i].name, name)==0){
			found=1;
			printSong(list[i]);
		}
	}
	return found;
}
void searchArtist(){
	char artist[30];
	printf("Enter artist: "); fflush(stdin); gets(artist);
	for(i=0; i<=n-1; i++){
		if(strcmp(listsong[i].artist, artist)==0){
			printSong(listsong[i]);
		}
	}
}

void dochoice1(){
	char name[50], album[50], artist[30];
	enter(name,album,artist);
	add(name, album, artist, &n);
	printf("\aAdded!\n");
}

void dochoice2(){
	if (n==0) printf("This list is blank\n");
	else{
		printf("%-40s\t%-40s\t%-40s\n","Name", "Album", "Artist");
		printf("------------------------------------------------------------------------------------------------------------\n");
		for(i=0; i<=n; i++)
		{
			printSong(listsong[i]);
		}
	}
}

void dochoice3(){
	char name[50];
	printf("Enter the name of the song: "); fflush(stdin); gets(name);
	if (!searchSong(listsong, name)) printf("\aNot found!\n");
}

void dochoice4(){
	searchArtist(listsong);
}	

void sort(){
	int j;
	for(i=0; i<n-1; i++)
		for(j=n-1; j>i; j--){
			int dArt=strcmp(listsong[j].artist, listsong[j-1].artist);
			int dAl=strcmp(listsong[j].album, listsong[j-1].album);
			int dNa=strcmp(listsong[j].name, listsong[j-1].name);
			if(dArt<0 || (dArt==0 && dAl<0) || (dAl==0 && dNa<0)){
				song t=listsong[j];
				listsong[j]=listsong[j-1];
				listsong[j-1]=t;			}
		}
		for(i=0;i<=n;i++)
			printSong(listsong[i]);
}

void dochoice5(){
	if (n==0) printf("This list is blank\n");
	else{
		printf("%-40s\t%-40s\t%-40s\n","Name", "Album", "Artist");
		printf("------------------------------------------------------------------------------------------------------------\n");
		sort(listsong);
	}
}
int menu(){
	int choice;
	printf("1 - Enter song\n");
	printf("2 - Print the list\n");
	printf("3 - Search a song by name\n");
	printf("4 - Search artist\n");
	printf("5 - Sort list\n");
	printf("6 - Exit\n");
	printf("Choose: "); scanf("%d", &choice);
	return choice;
}

int main(){
	int choice;
	do{
		choice=menu();
		system("cls");
		switch(choice){
			case 1: dochoice1(); system("pause"); system("cls"); break;
			case 2: dochoice2(); system("pause"); system("cls"); break;
			case 3: dochoice3(); system("pause"); system("cls"); break;
			case 4: dochoice4(); system("pause"); system("cls"); break;
			case 5: dochoice5(); system("pause"); system("cls"); break;
			default: printf("\aAdios!\n");
		}
	}while(choice>=1 && choice<=5);
	getch();
	return 0;
}
