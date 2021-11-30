#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


double valeur_absolue(double x)
{
	if (x < 0)
	{
		x = -x;
		return x;
	}
	else
	{
		x = x;
		return x;
	}
}
int calcul(int a, int b)
{

	int resultat = 1;
	
	int i;

	for (i = 0; i < b; i++)
	{
		resultat = resultat * a;
	}

	return resultat;
}

int main()
{
	printf("la valeur 4 est %.0f\n", valeur_absolue(4));
	printf("la valeur -4 est %.0f\n", valeur_absolue(-4));

	int x , y, resultat ;
	printf("donnez x : ");
	scanf("%d", &x);
	printf("donnez y : ");
	scanf("%d", &y);

	resultat = calcul(x, y);
	printf("Le resultat de %d puissance %d est : %d",x,y ,calcul(x,y));
	return 0 ;
}
