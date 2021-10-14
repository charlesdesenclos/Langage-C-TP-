#define gets
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <tchar.h>
#include <cstdio>
#include <string.h>

int main()
{
	char str[100];
	int i;
	printf("votre chaine :");
	gets_s(str);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32; //utilisation de la table ascii on rajoute +32 à la valeur décimale de la lettre en masjucule pour obtenir la meme lettre en minuscule
			                      //exemple on prend 

		}
	}
	printf("\n La chaine en miniscule est : %s", str);
	return 0;
}

