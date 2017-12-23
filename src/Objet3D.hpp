/*
 * Objet3D.hpp
 *
 *  Created on: 6 déc. 2017
 *      Author: Djenna
 */
#include "Position.hpp"

class Objet3D{

	private:
		Position centre;
	public:
		Objet3D();
		Objet3D(Position centre);
		//virtual ~Objet3D();

	//SETTERS-GETTERS

	const Position& getPosition() const {
		return centre;
	}

	void setPosition(const Position& position) {
		this->centre = position;
	}
};

