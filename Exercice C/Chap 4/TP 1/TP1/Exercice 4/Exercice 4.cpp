#define _CRT_SECURE_NO_WARNINGS
#define gets
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <tchar.h>
#include <cstdio>
#include <math.h>

void	affiche(int *tab, int value, int line, int col)
{
	
	int i = 0 ,j=0, v=0;

	
		for (i = 0; i < line; i++)
		{
			for (j = 0; j < col; j++)
			{
				if (v < value)
				{
					printf("%4d", tab[i * col] + j);
					v++;
				}
				
			}
			printf("\n");
		}
	
		
}

int main()
{
	int i = 0;
	int j = 0;
	int tab1[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19 };
	int tab2[] = { -19,18,-17,16,-15,14,-13,12,-11,10,-9,8,-7,6,-5,4,-3,2,-1,0 };
	
    
	printf("tab1 :\n");
	affiche(tab1, 20, 4, 5);

	printf(" tab2:\n");
	affiche(tab2, 17, 5, 4);

	return 0;
}