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
	char str[101]; 
	char *P; 
	int compteur[26], *ABC, compteur_espace=0; 
	

	printf("Entrez un texte : \n");
	gets_s(str);
	
	for (ABC = compteur; ABC < compteur + 26; ABC++) //tableau
	{
		*ABC = 0;
	}

	for (P = str; *P; P++) // permet de compter
	{
		if (*P >= 'A' && *P <= 'Z') // compter pour les lettres majuscules
		{
			(*(compteur + (*P - 'A')))++;
		}
		if(*P>='a' && *P<='z') //compter pour les lettres miniscules
		{
			(*(compteur + (*P - 'a')))++;
		}
		if (*P == ' ') //compter les espaces
		{
			compteur_espace++;
		}
		
	}

	// Affiche :
	printf("Le nombre d'espace est de : %d\t\n", compteur_espace); //affiche le nombre d'espace 
	
	printf("La chaine contient : \n", str);
	for (ABC = compteur; ABC < compteur + 26; ABC++)  // va permettre d'afficher le nombre de lettre pour chaque lettre
	{
		if (*ABC)
		{
			printf(" %d\tfois la lettre '%c' \n", *ABC, 'A' + (ABC - compteur));
			
		} 
	}
	return 0;
}
