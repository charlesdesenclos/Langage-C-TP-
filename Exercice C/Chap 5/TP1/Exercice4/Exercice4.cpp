#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <fcntl.h>
#include <time.h>
#include <sys/stat.h>



long calcul(FILE *fichier)
{
	int compteur =0;

	while (getc(fichier) != EOF)
	{
		compteur++;
	}
	

	printf("\n\nLe nombre d'octet du fichier est de %d\n\n",compteur);
	

	return compteur;

}

int main()
{
	FILE *source, *dest1, *dest2;
	source = fopen("./source.txt", "r");

	dest1 = fopen("./dest1.txt", "r");

	dest2 = fopen("./dest2.txt", "r");

	if (source == NULL)
	{
		printf("Le fichier est introuvable");
	}
	if (dest1 == NULL)
	{
		printf("Le fichier est introuvable");
	}
	if (dest2 == NULL)
	{
		printf("Le fichier est introuvable");
	}

	calcul(source);

	calcul(dest1);

	calcul(dest2);

	fclose(source);
	fclose(dest1);
	fclose(dest2);

	_getch();
	return 0;
}


