/*
 * Scene.cpp
 *
 *  Created on: 6 déc. 2017
 *      Author: Djenna
 */

#include <iostream>
#include <vector>
#include <cstdlib>

#include "Scene.hpp"

using namespace std;

Scene :: Scene()
{

}


ostream& operator<<(ostream& os, const Scene& scene)
{
	os << "Description de la scene : \n"<<endl;
	os << "La Camera : ";
	os << scene.saCamera.saPosition.x << " | ";
	os << scene.saCamera.saPosition.y << " | ";
	os << scene.saCamera.saPosition.z << endl;
	os << "Le coin supérieur gauche : ";
	os << scene.sonEcran.getTlc().x << " | ";
	os << scene.sonEcran.getTlc().y << " | ";
	os << scene.sonEcran.getTlc().z << endl;
	os << "Le coin supérieur droit : ";
	os << scene.sonEcran.getTrc().x << " | ";
	os << scene.sonEcran.getTrc().y << " | ";
	os << scene.sonEcran.getTrc().z << endl;
	os << "Le coin inférieur gauche : ";
	os << scene.sonEcran.getBlc().x << " | ";
	os << scene.sonEcran.getBlc().y << " | ";
	os << scene.sonEcran.getBlc().z << endl;
	os << "La résolution horizontale : ";
	os << scene.sonEcran.getHorizontaleRes() << endl;
	os << "La couleur de fond : ";
	os << scene.sonEcran.getBackground().getRouge() << " | ";
	os << scene.sonEcran.getBackground().getVert() << " | ";
	os << scene.sonEcran.getBackground().getBleu() << endl;
	os << "La source lumineuse : ";
	os << scene.saSource.getPosition().x << " | ";
	os << scene.saSource.getPosition().y << " | ";
	os << scene.saSource.getPosition().z << endl;
	os << scene.saSource.getCouleur().getRouge() << " | ";
	os << scene.saSource.getCouleur().getVert() << " | ";
	os << scene.saSource.getCouleur().getBleu() << endl;
	os << "Ses objets : " << endl;
	int i(1);
	for(Sphere s : scene.sesSpheres)
	{
		os << "Sphere n°"<<i<<" : ";
		os << s.centre.x << " | ";
		os << s.centre.y << " | ";
		os << s.centre.z << " | ";
		os << s.rayon << " | ";
		os << s.c.getRouge() << " | ";
		os << s.c.getVert() << " | ";
		os << s.c.getBleu() << " | ";
		os << s.reflexion << endl;

		i++;
	}


	return os;
}




