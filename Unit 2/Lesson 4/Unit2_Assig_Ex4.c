/*
 * Unit2_Assig_Ex4.c
 *
 *  Created on: Aug 15, 2023
 *      Author: Mazen
 */


#include <stdio.h>

int main()
{
	int n,m,l;
	printf("Enter the no. of elements :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	int x[n] , y[n+1] ;
	for(int i=0 ; i<n ; i++)
	{
		printf("Enter element no. %d: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&x[i]);
	}
	for(int i=0 ; i<n ; i++)
	{
		printf("%d  ",x[i]);
	}
	printf("\n Enter the element to be inserted: ");
	fflush(stdin);fflush(stdout);
	scanf("%d" , &m);
	printf("Enter the location: ");
	fflush(stdin);fflush(stdout);
	scanf("%d" , &l);
	for(int i=0 ; i<=n ; i++)
	{
		if(i<l-1)
		{
			y[i]=x[i];
		}
		else if(i==l-1)
		{
			y[i]=m;
		}
		else if(i>l-1)
		{
			y[i]=x[i-1];
		}
	}
	for(int i=0 ; i<=n ; i++)
	{
		printf("%d  ", y[i]);
	}


	return 0;
}
