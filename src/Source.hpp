/*
 * Source.hpp
 *
 *  Created on: 6 déc. 2017
 *      Author: Djenna
 */

#include "Position.hpp"
#include "ColorRGB.hpp"

#ifndef SOURCE_HPP_
#define SOURCE_HPP_


class Source
{

private:
	Position p;
	ColorRGB couleur;

public:
	Source();
	Source(Position p, ColorRGB couleur);
	virtual ~Source(){};

	const ColorRGB& getCouleur() const {
		return couleur;
	}

	void setCouleur(const ColorRGB& couleur) {
		this->couleur = couleur;
	}

	const Position& getP() const {
		return p;
	}

	void setP(const Position& p) {
		this->p = p;
	}
};

#endif /* SOURCE_HPP_ */
