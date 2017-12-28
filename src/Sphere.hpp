/*
 * Sphere.hpp
 *
 *  Created on: 6 déc. 2017
 *      Author: Djenna
 */
#include "Position.hpp"
#include "ColorRGB.hpp"
#include "Rayon.hpp"
#include "Objet3D.hpp"



class Sphere : public Objet3D{

	public:
		Position centre;
		int rayon;
		ColorRGB c;
		double reflexion;
		Sphere();
		Sphere(Position centre);
		Sphere(const Position& centre, double rayon, const ColorRGB& color, double reflexion);
		~Sphere();

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

	//Methodes membres
	bool intercepte(const Rayon& rayonI);

};

