#define _CRT_SECURE_NO_WARNINGS
#define gets
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <tchar.h>
#include <cstdio>
#include <math.h>

void transforme(char * maj)
{
	
	int i;
	for (i = 0; maj[i] != '\0'; i++)
	{
		if (maj[i] >= 'A' && maj[i] <= 'Z')
		{
			maj[i] = maj[i] + 32; //utilisation de la table ascii on rajoute +32 à la valeur décimale de la lettre en masjucule pour obtenir la meme lettre en minuscule

		}
	}
	printf("\n La chaine en miniscule est : %s", maj);
}

int main()
{
	char str[100];
	printf("Entrez votre chaine :");
	gets_s(str);

	transforme(str);


}

