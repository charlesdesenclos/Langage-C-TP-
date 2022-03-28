#define _CRT_SECURE_NO_WARNINGS
#define gets
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <tchar.h>
#include <cstdio>
#include <math.h>

char chaine(char *tab)
{
	int i;
	for (i = 0; i < strlen(tab); i++)
	{
		printf("adresse :%d | caractere : %c \n", &tab[i], tab[i]);
	}
	free(tab);

	_getch();
	return tab[i];
}


int main()
{

	char *tab;
	tab = (char*)malloc(50 * sizeof(char));
	scanf("%s", tab);
	chaine(tab);
	
}

