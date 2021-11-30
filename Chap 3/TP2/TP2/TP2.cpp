#define _CRT_SECURE_NO_WARNINGS
#define gets
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <tchar.h>
#include <cstdio>
#include <math.h>


//Exercice 1

int multiple2(int valeur)
{
	if (valeur % 2 == 0)
	{
		return (valeur - 1) / 2;
	}
}

int multiple3(int valeur)
{
	if (valeur % 3 == 0)
	{
		return (valeur - 1) / 3;

	}
}
int pair(int valeur)
{
	if (valeur % 2 == 0)
		printf("Paire\n");
	else
		printf("Impaire\n");

	return valeur;
}
int multiple6(int valeur)
{
	if (valeur % 6 == 0)
	{
		return (valeur - 1) / 6;

	}
}

//Exercice 2

char mot_de_passe(char mdp[])
{
	int i=0;
	char verifch = '\0';
	while (verifch != 13)
	{
		verifch = _getch();
		if (verifch != 13)
		{
			mdp[i] = verifch;
			printf("*");
			i++;
		}
		mdp[i] = '\0';
	}
	return mdp[i];
}




int main()
{
	//Exercice 1

	int valeur;
	printf("Saisir une valeur :");
	scanf("%d", &valeur);

	printf("\n\nLa valeur multiple 2 est : %d\n\n", multiple2(valeur));
	printf("\n\nLa Valeur multiple 3 est : %d\n\n", multiple3(valeur));
	pair(valeur);
	printf("\n\nLa Valeur multiple 6 est : %d\n\n", multiple6(valeur));
		
	//Exercice 2

	char mdp[30];
	printf("Entrez un mot de passe : \n");
	mot_de_passe(mdp);
	printf("\n");
	printf("Le mot de passe est: \n%s", mdp);
	_getch();

	
	
}

