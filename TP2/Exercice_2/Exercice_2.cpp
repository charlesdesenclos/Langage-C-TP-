#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	float somme = 0;
	const int TAB_SIZE_1 = 3;
	const int TAB_SIZE_2 = 4;
	int j,i;

	float t[TAB_SIZE_1][TAB_SIZE_2];
	float m[TAB_SIZE_1];
	float moyenne, somme;
	printf("Entrez les nombres  du tableau\n");
	for (int i = 0; i < TAB_SIZE_1; i++) {
		for ( j=0; j < TAB_SIZE_1; j++)
		{		printf("Nombre %d/10 : ", i + 1);
			scanf("%f", &t[i][j]);
	}
		somme = somme + t[i][j];
		moyenne = t[i][j] / 4;
}

