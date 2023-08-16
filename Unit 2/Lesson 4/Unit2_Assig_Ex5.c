/*
 * Unit2_Assig_Ex5.c
 *
 *  Created on: Aug 16, 2023
 *      Author: Mazen
 */

#include <stdio.h>

int main()
{int m , s ;
printf("Enter no. of elements: ");
fflush(stdin);fflush(stdout);
scanf("%d",&m);
int n[m];
for(int i=0 ; i<m ; i++)
{
	printf("Enter element %d : ", i+1);
	fflush(stdin);fflush(stdout);
	scanf("%d",&n[i]);
}
printf("Enter the element to be searched: ");
fflush(stdin);fflush(stdout);
scanf("%d",&s);
for(int i=0 ; i<m ; i++)
{
	if(n[i]==s)
	{
		printf("Number found at the location : %d",i+1);
	}

}

}
