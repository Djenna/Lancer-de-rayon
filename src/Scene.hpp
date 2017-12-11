/*
 * Scene.hpp
 *
 *  Created on: 6 déc. 2017
 *      Author: Djenna
 */

#include "Ecran.hpp"
#include "Source.hpp"
#include "Sphere.hpp"

#ifndef SCENE_HPP_
#define SCENE_HPP_

class Scene
{
	private:
		std::vector<Sphere> sesSpheres; //Liste des sphères contenues dans la scène
		Ecran sonEcran;
		Source saSource;
	public:
		Scene();
		//virtual ~Scene(){};


};





#endif /* SCENE_HPP_ */
