#include "point.h"
#include <iostream>
#include <stdio.h>

point::point(float x, float y)
{
	this->x = x;
	this->y = y;
}

void point::deplace(float dx, float dy)
{
	x += dx;
	y += dy;
}
/* 
Exercice 1

void point::affiche()
{
	printf("x:%f;\n y:%f\n", x, y);

}
*/
float point::abscisse()
{
	return x;
}
float point::ordonnee()
{
	return y;
}

