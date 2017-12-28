/*
 * Position.hpp
 *
 *  Created on: 6 déc. 2017
 *      Author: Djenna
 */

#ifndef POSITION_HPP_
#define POSITION_HPP_

class Position{

	public:
	int x;
	int y;
	int z;

	Position();
	Position(int x, int y, int z);
	Position(const Position& p);


	/* Cette methode nous permet de calculer le carre de la norme euclidienne */
	double normeEuclidienneCarre();

	/* Cette methode nous permet de calculer la norme euclidienne*/
	double normeEuclidienne();

	/*Surcharge de l'operateur -=*/
	Position& operator -= (const Position& p)
	{
		x -= p.x;
		y -= p.y;
		z -= p.z;
		return *this;
	}

	/*Surcharge de l'operateur -=*/
	Position& operator /=(double d)
	{
		x/=d;
		y/=d;
		z/=d;
		return *this;
	}

	};

/* Cette methode permet de calculer le carre d'une valeur*/
double carre(double d);

/*Cette methode permet de multiplier les coord de 2 positions*/
double multiplie(Position p1, Position p2);









#endif /* POSITION_HPP_ */
