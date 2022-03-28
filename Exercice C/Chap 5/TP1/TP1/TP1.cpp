#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int verif=0;
	char carac;
	FILE *fichier;
	fichier = fopen("./source.txt", "r");
	if (fichier == NULL)
	{
		printf("Le fichier est introuvable");
	}
	while (verif == 0 && fichier != NULL)
	{
		carac = getc(fichier);
		printf("%c",carac);
		verif = feof(fichier);


	}
	fclose(fichier);
	_getch();
	return 0;
}

