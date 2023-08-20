/*
 * Unit2_L5_Assig_Ex3.c
 *
 *  Created on: Aug 20, 2023
 *      Author: Mazen
 */


#include <stdio.h>
#include <string.h>


void inreverse(char sent[] , int i)
{
	printf("%c",sent[i]);
	i--;
	if (i>=0)
	{
		inreverse(sent , i);
	}

}

int main()
{
	char sent[30];
	printf("Enter a sentence : ");
	fflush(stdin);fflush(stdout);
	gets(sent);
	int i=strlen(sent);
	inreverse(sent , i);

	return 0;
}
