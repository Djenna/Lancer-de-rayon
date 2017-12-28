/*
 * Rayon.cpp
 *
 *  Created on: 27 déc. 2017
 *      Author: Djenna
 */

#include "Rayon.hpp"
/* Par defaut le constructeur initialise l'origine a 0*/
Rayon::Rayon(): origine(0, 0, 0), direction(0,0,0)
{
}

/*Constructeur de copie*/
Rayon::Rayon(const Rayon& r): origine(r.origine), direction(r.direction)
{

}

/* Construteur avec parametres*/
Rayon::Rayon(const Position& origine, const Position& direction): origine(origine), direction(direction)
{

}



