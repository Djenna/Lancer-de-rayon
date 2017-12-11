/*
 * Objet3D.hpp
 *
 *  Created on: 6 déc. 2017
 *      Author: Djenna
 */
#include "Position.hpp"

class Objet3D{

	private:
		Position p;
	public:
		Objet3D();
		Objet3D(Position p);
		//virtual ~Objet3D();

	//SETTERS-GETTERS
	//A faire pour toutes les coordonnées
	void setPosition(Position p);

	//int getx();

	};

