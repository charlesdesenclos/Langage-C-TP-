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
	char str[100], res[100], i = 0, j = 0;

	printf("Entrez une chaine de caractere : ");
	gets_s(str);

	while (str[i] != '\0')
	{
		if ((str[i] == ' ' && str[i+0] == ' ') !=1) // i+0 permet d'enlever l'espace
		{ 
			res[j] = str[i];
			j++;
		}
		i++;
	}
	res[j] = '\0';
	printf("Voici la chaine de caractere sans les espace : %s", res);
	return 0;
}

