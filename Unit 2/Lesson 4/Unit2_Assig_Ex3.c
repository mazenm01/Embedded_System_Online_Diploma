/*
 * Unit2_Assig_Ex3.c
 *
 *  Created on: Aug 15, 2023
 *      Author: Mazen
 */


#include<stdio.h>

int main()
{
	int r , c ;
	printf("Enter the number of rows and columns:");
	fflush(stdin);fflush(stdout);
	scanf ("%d %d", &r , &c );
	int x[r][c] ,z[r][c];
	for(int i=0 ; i<r ; i++)
	{
		for(int j=0 ; j<c ; j++)
		{
			printf("Enter the element a%d%d:",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d" , &x[i][j]);
		}

	}
	printf("The entered matrix is :");
	for(int i=0 ; i<r ; i++)
	{
		printf("\n");
		for(int j=0 ; j<c ; j++)
		{
			printf("%d  " , x[i][j]);

		}

	}
	for(int i=0 ; i<r ; i++)
		{
			for(int j=0 ; j<c ; j++)
			{
				z[i][j]=x[i][j];

			}

		}
	printf("\n The transpose of the matrix is :");
	for(int i=0 ; i<c ; i++)
	{
		printf("\n");
		for(int j=0 ; j<r ; j++)
		{
			printf("%d  " , z[j][i]);

		}

	}
	return 0;
}
