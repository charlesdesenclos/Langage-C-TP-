#include "point.h"

#include <iostream>

void affiche(point P)
{
	printf("x : %f ; y : %f\n", P.abscisse(), P.ordonnee());
}

int main()
{
	point P(4, 12);

	affiche(P);

	//P.affiche(); Exercice 1

	P.deplace(6, 5);

	affiche(P);

	//P.affiche(); Exercice 1


}


