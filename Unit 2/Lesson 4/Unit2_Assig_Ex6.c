/*
 * Unit2_Assig_Ex6.c
 *
 *  Created on: Aug 16, 2023
 *      Author: Mazen
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int counter=0 ;
char text[30] , c;
printf("Enter a string :");
fflush(stdin);fflush(stdout);
gets(text);
printf("Enter a character to find its frequency : ");
fflush(stdin);fflush(stdout);
scanf("%c",&c);
for (int i=0 ; i<30 ; i++)
{
	if(text[i]==c)
	{
		counter+=1 ;
	}
}
printf("Frequency of %c = %d",c,counter);
return 0;
}
