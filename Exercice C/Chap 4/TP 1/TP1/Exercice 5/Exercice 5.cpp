#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void saisie(float *aa, float *bb, float *cc)
{
	printf("Saisir a : ");
	scanf("%f", aa);
	printf("Saisir b : ");
	scanf("%f", bb);
	printf("Saisir c : ");
	scanf("%f", cc);
}
float *calcul(float aa, float bb, float cc)
{
	
	
	
	
	

	

	float delta;
	delta = (bb *bb) - 4 * aa *cc;
	float * resultat = NULL;

	if (delta > 0)
	{
		printf(" Delta > 0 donc l'equation admet deux solutions reelles ");
		resultat = (float*)malloc(3 * sizeof(float));
		resultat[0] = 2;

		resultat[1] = (-bb - sqrt(delta)) / 2 * aa;
		resultat[2] = (-bb + sqrt(delta)) / 2 * aa;

		
	}
	else if (delta == 0)
	{
		printf(" Delta =0 donc l'�quation admet une solution reelle");
		resultat = (float*)malloc(3 * sizeof(float));
		resultat[0] = 1;
		resultat[1] = (-bb) / 2 * aa;

		
	}
	
	
	return resultat;
}







int main()
{
	float a, b, c;
	float *resultat;
	saisie(&a, &b, &c);
	resultat = calcul(a, b, c);
	

	if (resultat == NULL)
	{
		printf("Delta < 0 donc l'equation n'admet aucune solution reelle");
	}
	else
	{
		int solu = resultat[0];
		if (solu == 2)
		{
			printf("\n\nLa premiere racine  est de %f \n\n", resultat[1]);
			printf("\n\nLa deuxieme racine  est de %f \n\n", resultat[2]);
		}

		else if (solu == 1)
		{
			
			printf("\n\nLa racine est de %f\n\n", resultat[1]);
		}
	}
	free(resultat);
}

