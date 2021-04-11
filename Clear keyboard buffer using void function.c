#include <stdio.h>
#include <conio.h>
void clear()
{	while(getchar()!='\n');
}
main()
{  char c1, c2;
   printf("Input a character:");
   scanf("%c",c1);
   clear();
   printf("Input a character:");
   c2= getchar();
   printf("c1: %c, ASCII code: %d, %o, %X\n", c1,c1,c1,c1);
   printf("c2: %c, ASCII code: %d, %o, %X\n", c2,c2,c2,c2);
   getch();
}
