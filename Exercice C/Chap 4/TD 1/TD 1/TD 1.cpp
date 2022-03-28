#define _CRT_SECURE_NO_WARNINGS
#define gets
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <tchar.h>
#include <cstdio>
#include <math.h>

#define TAB_SIZE 20

void saisie(int *val, int *nb)
{
	int tab[TAB_SIZE];
	int nbValue = 0;

	

	printf("Saisissez les valeurs (entrez 0 pour arreter) :\n");
	for (int i = 0; i < 40; i++)
	{
		scanf("%d", &val[i]);
		if (tab[i] == 0)
			break;

		nbValue++;
	}

}
 


int main()
{
	int val[20];
	int nb[20];
	saisie(val,nb);
}
