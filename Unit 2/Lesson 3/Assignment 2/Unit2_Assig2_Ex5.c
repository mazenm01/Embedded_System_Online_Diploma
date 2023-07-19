/*
 * Unit2_Assig2_Ex5.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Mazen
 */

#include <stdio.h>

int main()
{
char x;
printf("Enter a character:" );
fflush(stdout);fflush(stdin);
scanf("%c",&x);
if((x>64) && (x<123))
{
	printf("%c is an alphabet",x );
}
else
{
	printf("%c is not an alphabet",x );
}
return 0;
}
