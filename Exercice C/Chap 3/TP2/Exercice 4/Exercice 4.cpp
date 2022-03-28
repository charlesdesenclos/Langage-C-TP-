#define _CRT_SECURE_NO_WARNINGS
#define gets
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <tchar.h>
#include <cstdio>
#include <math.h>

int lire(int * tab,int valeurs)
{
	int i;

	for (i = 0; i < valeurs; i++)
	{
		int pos = 0;

		printf("Les valeurs du tableau a la position %d sont %d\n", i + 1, tab[i]);
	}
	return tab[i];
}

void trier(int * tab, int valeurs)
{
	int isFirstValue = 1;


	int swapDone;
	int nbTestDone = 0;
	do
	{
		swapDone = 0;

		for (int i = 0; i < valeurs - 1; i++)
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
}

int indice_min(int * tab)
{
	int min;
	min = tab[0];
	int i;

	for (i = 1; i < 20 ; i++)
	{
		if (tab[i] < min)
		{
			min = tab[i];
		}

	}
	printf(" Le minimum est %d\n", min);
	return min;

}

void affiche(int * tab, int valeurs)
{

	trier(tab, valeurs);
	int swapDone;
	int nbTestDone = 0;
	int i;
	int isFirstValue = 1;

	printf("\n");

	printf("\n");
	printf("Valeurs triees : \n");
	printf("\n");

	isFirstValue = 1;
	for (int i = 0; i < valeurs; i++)
	{
		if (isFirstValue == 0)
			printf(", ");
		printf("%d", tab[i]);

		isFirstValue = 0;
	}

	printf("\n");

}


int main()
{
	int valeurs = 20;
	int tab[20];
	int i;
	
	for (i = 0; i < valeurs; i++)
	{
		printf("Valeurs %d : ", i);
		scanf("%d", &tab[i]);
	}
	lire(tab, valeurs);
	printf("\n");
	affiche(tab, valeurs);
	
	printf("\n");
	indice_min(tab);
}


