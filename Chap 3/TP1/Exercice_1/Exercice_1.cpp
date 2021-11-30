#define _CRT_SECURE_NO_WARNINGS
#define gets
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <tchar.h>
#include <cstdio>
#include <math.h>


// Exercice 1 
int puissance(int a, int b)
{
	if (b > 0)
	{
		return a * puissance(a,b - 1);
	}
	return 1;
}

// Exercice 2

void affiche(int *t)
{
	int i;
	
	
		for (i = 0; i < 10; i++)
		{
			int pos = 0;
			
			
				printf("Les valeurs du tableau a la position %d sont %d\n",i+1, t[i]);
		}
}

// Exercice 3

float min(float *tab)
{
	float min;
	min = tab[0];
	int i;
	for (i = 1; i < 8; i++)
	{
		if (tab[i] < min)
		{
			min = tab[i];
		}
	}
	printf("La valeur minimum est %f", min);
	return min;
}
float max(float *tab)
{
	float max;
	max = tab[0];
	int i;
	for (i = 1; i < 8; i++)
	{
		if (tab[i] > max)
		{
			max = tab[i];
		}	
	}
	printf("La valeur maximum est %f", max);
	return max;
}

//Exercice 4

int pgcd(int nbr1, int nbr2)
{
	int pgcd, i;
	for (i = 1; i <= nbr1 && i <= nbr2; ++i)
	{
		if (nbr1%i == 0 && nbr2%i == 0)
			pgcd = i;
	}
	return pgcd;
}

//Exercice 5

int calcul(unsigned int n)
{
	if (n <= 1) {
		return 1;
	}
		
	else
	{
		return calcul(n - 1)*n;
	}
		
}



int main()
{   
	printf("\n\nExercice 1 \n\n");
	// Exercice 1 
	
	int x, y;
	printf("Entrez x :\n");
	scanf("%d", &x);
	printf("Entrez y :\n");
	scanf("%d", &y);

	printf("Le résultat pour %d puissance %d est : %d", x, y, puissance(x, y));

	// Exercice 2
	printf("\n\nExercice 2\n\n");
	int i;
	int liste[10] = { 1,2,4,8,16,32,64,128,256,512 };
	affiche(liste);

	//Exercice 3

	printf("\n\nExercice 3\n\n");
	float list[8] = { 1.6,-6.9,9.67,5.90,345,-23.6,78,34.6 };
	min(list);
	max(list);

	//Exercice 4

	printf("\n\nExercice4 \n\n");
	int nbr1, nbr2;
	printf("Entrez une première valeur :");
	scanf("%d", &nbr1);
	printf("Entrez une deuxième valeur :");
	scanf("%d", &nbr2);
	printf("Le PGCD de %d et %d est de %d", nbr1, nbr2, pgcd(nbr1, nbr2));

	//Exercice 5

	printf("\n\n Exercice 5\n\n ");
	int n;
	printf("Entrez la valeur n :");
	scanf("%d", &n);
	printf("Le résultat de n! est : %d", calcul(n));



}
