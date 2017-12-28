/*
 * Rayon.hpp
 *
 *  Created on: 27 déc. 2017
 *      Author: Djenna
 */

#ifndef RAYON_HPP_
#define RAYON_HPP_

#include "Position.hpp"

class Rayon{
	public :
	/*Constructeur par defaut */
	Rayon();
	/*Constructeur avec parametres*/
	Rayon(const Position& origine, const Position& direction);
	/*Constructeur de copie*/
	Rayon(const Rayon& r);
	/* Le destructeur par defaut*/
	//virtual ~Rayon();

	/*Getters*/
	Position getOrigine()
	{
		return origine;
	}

	Position getDirection()
	{
		return direction;
	}

	/*Setters*/
	void setDirection(const Position& direction) {
		this->direction = direction;
	}

	void setOrigine(const Position& origine) {
		this->origine = origine;
	}

	private :
	/* Un rayon est défini par un point d'origine et un vecteur 		direction*/
	Position origine;
	Position direction;

};


#endif /* RAYON_HPP_ */
