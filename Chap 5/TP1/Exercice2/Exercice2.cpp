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
	FILE *source,*dest1;
	source = fopen("./source.txt", "r");
	
	dest1 = fopen("./dest1.txt", "w");
	
	

	if (source == NULL)
	{
		printf("Le fichier est introuvable");
	}
	if (dest1 == NULL)
	{
		printf("Le fichier est introuvable");
	}
	while (verif == 0 && source != NULL && dest1 != NULL)
	{
		carac = getc(source);
		putc(carac, dest1);

		verif = feof(source);

	}

	fclose(source);
	fclose(dest1);

	_getch();
	return 0;

		
}

