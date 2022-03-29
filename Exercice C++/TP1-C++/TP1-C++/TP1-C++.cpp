#include "pile_entier.h"
#include <iostream>
#include <stdio.h>




int main()
{
	pile_entier *pile = new pile_entier(22);
	
	


	if (pile->vide() == 1)
	{
		printf("La Pile est vide.\n");

	}
	else if (pile->vide() == 0)
	{
		printf("La Pile n'est pas vide.\n");
	}



	if (pile->pleine() == 1)
	{
		printf("La Pile est pleine.\n");
	}
	else if (pile->pleine() == 0)
	{
		printf("La Pile n'est pas pleine\n");
	}

	for (int i = 0; pile->pleine() == 0; i++)
	{
		printf("La Pile va se remplir : %d.\n",i);
		pile->empile(i);
	}

	while (pile->vide() != 1)
	{
		int val = pile->depile();
		printf("La Pile va se vide : %d.\n",val);
		
	}

}


