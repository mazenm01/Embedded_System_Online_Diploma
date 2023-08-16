/*
 * Unit2_Assig_Ex8.c
 *
 *  Created on: Aug 16, 2023
 *      Author: Mazen
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x;
	char text[30];
printf("Enter a string :");
fflush (stdin);fflush (stdout);
gets(text);
x=strlen(text);
printf("The reverse string is :");
for(int i=x ; i>=0 ; i-- )
{
	printf("%c",text[i]);
}

return 0;
}
