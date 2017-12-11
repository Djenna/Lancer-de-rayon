/*
 * Sphere.hpp
 *
 *  Created on: 6 déc. 2017
 *      Author: Djenna
 */
#include "Position.hpp"
#include "Objet3D.hpp"

class Sphere : public Objet3D{

	private:
		Position p_centre;
		int rayon;
		//ColorRGB c;
		double reflexion;

	public:
		Sphere();
		Sphere(Position p);
		//virtual ~Position();

	//SETTERS-GETTERS
	//A faire pour toutes les coordonnées
	void setPosition(Position p);

	//int getx();


};

