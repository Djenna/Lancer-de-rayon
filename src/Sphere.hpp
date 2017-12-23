/*
 * Sphere.hpp
 *
 *  Created on: 6 déc. 2017
 *      Author: Djenna
 */
#include "Position.hpp"
#include "Objet3D.hpp"
#include "ColorRGB.hpp"



class Sphere : public Objet3D{

	public:
		Position centre;
		int rayon;
		ColorRGB c;
		double reflexion;
		Sphere();
		Sphere(Position centre);
		//virtual ~Position();

	//SETTERS-GETTERS

	const ColorRGB& getC() const {
		return c;
	}

	void setC(const ColorRGB& c) {
		this->c = c;
	}

	Position& getCentre() {
		return centre;
	}

	void setCentre(const Position& centre) {
		this->centre = centre;
	}

	int getRayon() const {
		return rayon;
	}

	void setRayon(int rayon) {
		this->rayon = rayon;
	}

	double getReflexion() const {
		return reflexion;
	}

	void setReflexion(double reflexion) {
		this->reflexion = reflexion;
	}
};

