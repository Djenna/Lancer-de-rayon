/*
 * Image.hpp
 *
 *  Created on: 25 déc. 2017
 *      Author: Djenna
 */

#ifndef IMAGE_HPP_
#define IMAGE_HPP_

#include <fstream>
#include <iostream>
#include <vector>

class Image
{
private:
	int longueur;
	int largeur;
	std::vector<std::vector<int> > pixels;

public:
	Image();
	Image(int longueur, int largeur);
	void creationImage();

};




#endif /* IMAGE_HPP_ */
