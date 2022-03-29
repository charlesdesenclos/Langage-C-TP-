#include "pile_entier.h"

pile_entier::pile_entier(int taille_pile)
{
	pile = new int[taille];
	taille = taille_pile;
	this->hauteur = 0;
	
}
pile_entier::~pile_entier()
{
	delete pile;
}
void pile_entier::empile(int element)
{
	if (pleine() != 1)
	{
		pile[hauteur] = element;
		hauteur++;
	}
	
}
int pile_entier::depile()
{
	if (vide() != 1)
	{
		int resultat = pile[--hauteur];
		return resultat;
	}

	return 0;
}
int pile_entier::pleine()
{
	return hauteur == taille;
}
int pile_entier::vide()
{
	return hauteur == 0;
}