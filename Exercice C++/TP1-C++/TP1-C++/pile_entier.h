#pragma once
class pile_entier
{
	private:
		int *pile, taille, hauteur;

	public:
		pile_entier(int);
		~pile_entier();
		void empile(int);
		int depile();
		int pleine();
		int vide();

};

