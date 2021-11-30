#define _CRT_SECURE_NO_WARNINGS
#define gets
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <tchar.h>
#include <cstdio>


int main()
{	
	char str[100],rev[100], lettre = 0;
	int t, i, j,k,a,occurrence =0;
	char l,c;
	
	printf(" Entrez une chaine de caractere :  ");
	gets_s(str);

	j = 0;
	t = strlen(str);

	rev[t] = '\0';
	for (i = t - 1; i >= 0; i--)
	{
		rev[j++] = str[i];
	}

	rev[t] = '\0';

	printf("Entrez la lettre recherche :");
	scanf("%c", &c);

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] == c)
			++occurrence;
	}
	

	printf("caractere %c à la position %d, a partir de la droite", c, occurrence);
	return 0;
}
