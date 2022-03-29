#pragma once
class point
{
	public:
		point(float x, float y);
		void deplace(float dx, float dy);
		//void affiche(); Exercice 1
		float abscisse();
		float ordonnee();

	private:
		float x, y;
};

