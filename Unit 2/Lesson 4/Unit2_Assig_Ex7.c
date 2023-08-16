/*
 * Unit2_Assig_Ex7.c
 *
 *  Created on: Aug 16, 2023
 *      Author: Mazen
 */

#include <stdio.h>
#include <stdlib.h>
char text[30];

int main()
{
	int counter=0;

	printf("Enter a string : ");
	fflush(stdin);fflush(stdout);
	gets(text);
	for(int i=0 ; i<30 ; i++)
	{
		if(text[i]>=65 && text[i]<=122)
		{
			counter+=1;
		}
	}
	printf("Length of string : %d",counter);
	return 0;
}
