#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int verif = 0;
	char carac;
	FILE *source, *dest2;
	source = fopen("./source.txt", "r");

	dest2 = fopen("./dest2.txt", "w");

	if (source == NULL)
	{
		printf("Le fichier est introuvable");
	}
	if (dest2 == NULL)
	{
		printf("Le fichier est introuvable");
	}
	while (verif == 0 && source != NULL && dest2 != NULL)
	{
		
			carac = getc(source);
			if (carac != 97)
			{
				putc(carac, dest2);
			}
			

			verif = feof(source);
		
		

	}
	fclose(source);
	fclose(dest2);

	_getch();
	return 0;
}

