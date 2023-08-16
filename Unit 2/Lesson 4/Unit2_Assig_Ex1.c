/*
 * Unit2_Assig_Ex1.c
 *
 *  Created on: Aug 13, 2023
 *      Author: Mazen
 */


#include <stdio.h>

int main()
{
	float x[2][2] , y[2][2] ,z[2][2];
	printf("Enter the elements of the first matrix");
	printf("\n");

	for(int i=0 ; i<2 ; i++)
	{
		for(int j=0 ; j<2 ; j++)
		{
			printf("Enter a%d%d :",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &x[i][j]);
		}
	}

	printf("Enter the elements of the second matrix");
	printf("\n");

	for(int i=0 ; i<2 ; i++)
	{
		for(int j=0 ; j<2 ; j++)
		{
			printf("Enter b%d%d :",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &y[i][j]);
		}
	}


	printf("The sum of the two matrices is");
	for(int i=0 ; i<2 ; i++)
	{
		for(int j=0 ; j<2 ; j++)
		{
			z[i][j]=x[i][j] + y[i][j];
		}
	}

	for(int i=0 ; i<2 ; i++)
	{
		printf("\n");
		for(int j=0 ; j<2 ; j++)
		{
			printf("%.1f  ",z[i][j]);
		}

	}

	return 0;
}
