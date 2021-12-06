#define _CRT_SECURE_NO_WARNINGS
#define gets
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <tchar.h>
#include <cstdio>
#include <math.h>

//Exercice 1

float adr(float adr1, float adr2)
{
	
	
	printf("adr1 %d \n", &adr1);
	printf("adr2 %d \n", &adr2);
	_getch();
	return adr1, adr2;
}

//Exercice 2

float adr_deb(float *tab)
{
	int isFirstValue;
	int nbValue = 6;
	int swapDone;
	int nbTestDone = 0;
	int i;
	do
	{
		swapDone = 0;

		for (int i = 0; i < nbValue - 1; i++)
		{
			nbTestDone++;
			if (tab[i] > tab[i + 1])
			{
				swapDone = 1;
				int tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
		}

	} while (swapDone == 1);

	printf("Valeurs triees : \n");

	isFirstValue = 1;
	for (int i = 0; i < nbValue; i++)
	{
		if (isFirstValue == 0)
			printf(", ");
		printf("%d", tab[i]);

		isFirstValue = 0;
	}

	float min;
	min = tab[0];
	for (i = 1; i < 6; i++)
	{
		if (tab[i] < min)
		{
			min = tab[i];
		}

	}
	printf("La valeur minimum est %f", min);

	printf("adr1 %d \n", &tab[i]);
	
	_getch();
	

}



int main()
{
	//Exercice 1

	float adr1, adr2;
	adr1 = -45.78;
	adr2 = 678.89;
	adr(adr1, adr2);
	printf("\n");

	//Exercice 2

	int i;
	float tab[6];
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &tab[i]);
	}
	adr_deb(tab);


}	