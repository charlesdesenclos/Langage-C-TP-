#define _CRT_SECURE_NO_WARNINGS
#define gets
#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <tchar.h>
#include <cstdio>
#include <math.h>

void saisie(float *aa, float *bb, float *cc)
{
	
	printf("Saisir a :");
	scanf("%f ", aa);
	printf("Saisir b :");
	scanf("%f ", bb);
	printf("Saisir c :");
	scanf("%f ", cc);
	aa = (float*)malloc(sizeof(float));
	bb= (float*)malloc(sizeof(float));
	cc = (float*)malloc(sizeof(float));
	
}
float *calcul(float aa, float bb, float cc)
{
	saisie(&aa, &bb, &cc);
	float *a ;
	float *b ;
	float *c ;
	
	
	float * resultat = NULL;

	

	float delta;
	delta = (bb *bb) - 4 * aa *cc;

	if (delta > 0)
	{
		printf(" Delta > 0 donc l'equation admet deux solutions reelles ");
		resultat = (float*)malloc(3 * sizeof(float));
		resultat[0] = 2;

		resultat[1] = (-bb - sqrt(delta)) / 2 * aa;
		resultat[2] = (-bb + sqrt(delta)) / 2 * aa;

		printf("\n\nLa premiere racine  est de %f \n\n", resultat[1]);
		printf("\n\nLa deuxième racine  est de %f \n\n", resultat[2]);
	}
	else if (delta = 0)
	{
		printf(" Delta =0 donc l'équation admet une solution reelle");
		resultat = (float*)malloc(3 * sizeof(float));
		resultat[0] = 1;
		resultat[1] = (-bb) / 2 * aa;

		printf("\n\nLa racine est de %f\n\n", resultat[1]);
	}
	else if (delta < 0)
	{
		printf("Delta < 0 donc l'équation n'admet aucune solution reelle");
	}
	free(resultat);
	return &aa;
}







int main()
{
	float a, b, c;
	
	saisie(&a, &b, &c);

	
	

}

