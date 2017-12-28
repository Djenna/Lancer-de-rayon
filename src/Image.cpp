/*
 * Image.cpp
 *
 *  Created on: 25 déc. 2017
 *      Author: Djenna
 */
#include "Image.hpp"


Image :: Image()
{

}

Image :: Image(int longueur, int largeur) : longueur(longueur), largeur(largeur)
{

}

void Image :: creationImage()
{
	std::ofstream fichier("Image.txt");
	if(fichier)
	{
		fichier << "P3" << std::endl;
		fichier << longueur << " " << largeur << std::endl;
		fichier << "255";
		//Affichage des pixels
	}
	else
	{
		std::cout << "Impossible d'ouvrir le fichier." << std::endl;
	}
}



