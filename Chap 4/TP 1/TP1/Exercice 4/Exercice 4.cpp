#define _CRT_SECURE_NO_WARNINGS
#define gets
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <tchar.h>
#include <cstdio>
#include <math.h>

void affiche(int *tab, int line, int col)
{
	int i, j;
	for (i = 0; i < line; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%4d, ", tab[(i * col) + j]);
		}
		printf("\n");
	}
}
	
	


int main()
{
	int i=0, j=0;
	int tab1[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19 };
	int tab2[] = { -19,18,-17,16,-15,14,-13,12,-11,10,-9,8,-7,6,-5,4,-3,2,-1,0 };
	
    
	int  sizetab1 = sizeof(tab1) / sizeof(int);
	int sizetab2 = sizeof(tab2) / sizeof(int);

	int *result = (int*)malloc(sizeof(tab1) * sizeof(tab2));
	system("mode con lines=50 cols=130");

	printf("sizeof(tab1) : %d\n", sizeof(tab1));	
	printf("sizeof(tab2) : %d\n", sizeof(tab2));	
	printf("sizeof(int) : %d\n", sizeof(int));		
	printf("sizeTab1 : %d\n", sizetab1);			
	printf("sizeTab2 : %d\n", sizetab2);			
	printf("sizeof(result) : %d\n", sizeof(result)); 

	for (i = 0; i < sizetab1; i++)
	{
		for (j = 0; j < sizetab2; j++)
		{
			result[(i * sizetab2) + j] = tab1[i] * tab2[j];
		}
	}

	affiche(result, sizetab1, sizetab2);

	free(result);

	return 0;



}


