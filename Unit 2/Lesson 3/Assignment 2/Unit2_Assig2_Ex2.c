/*
 * Unit2_Assig2_Ex2.c
 *
 *  Created on: Jul 19, 2023
 *      Author: Mazen
 */
#include <stdio.h>

int main()
{
	char x;
	printf("Enter an alphabet:");
	fflush(stdout);fflush(stdin);
	scanf("%c",&x);
	switch(x)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':

		printf("%c is a vowel",x);

		break;

	default:
		printf("%c is a consonant",x);
	}
	return 0;
}

