#define _CRT_SECURE_NO_WARNINGS
#define gets
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <tchar.h>
#include <cstdio>
#include <math.h>

//Exercice 2

int adr_deb( int *tab)
{
	int i;
	int n;
	int tmp;
	

	do
	{
		n = 0;
		for (i = 0; i < 5; i++)
		{
			if (tab[i] > tab[i + 1])
			{
				n = 1;
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
		}
	} while (n);
	printf("Le maximum est %d a l'indice %d, son adresse est %p\n\n", tab[5], 5, &tab[5]);
	free(tab);
	system("PAUSE");
	return *tab;
}


int main()
{
	//Exercice 2

	int * adr =0;

	adr = (int*)malloc(6 * sizeof(int));
	for (int i = 0; i < 6; i++)
	{
		printf("Entrez une valeur de type entiere: ");
		scanf("%d", &adr[i]);
	}
	adr_deb(adr);
}

