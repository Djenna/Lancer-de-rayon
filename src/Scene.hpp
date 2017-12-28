/*
 * Scene.hpp
 *
 *  Created on: 6 déc. 2017
 *      Author: Djenna
 */

#include "Ecran.hpp"
#include "Source.hpp"
#include "Sphere.hpp"
#include "Camera.hpp"
#include <vector>

#ifndef SCENE_HPP_
#define SCENE_HPP_

using namespace std;

class Scene
{
	private:
		std::vector<Sphere> sesSpheres; //Liste des sphères contenues dans la scène
		Ecran sonEcran;
		Source saSource;
		Camera saCamera;
	public:
		Scene();
		//virtual ~Scene(){};

	const Source& getSaSource() const {
		return saSource;
	}

	void setSaSource(const Source& saSource) {
		this->saSource = saSource;
	}

	 std::vector<Sphere>& getSesSpheres() {
		return sesSpheres;
	}

	void setSesSpheres(const std::vector<Sphere>& sesSpheres) {
		this->sesSpheres = sesSpheres;
	}

	const Ecran& getSonEcran() const {
		return sonEcran;
	}

	void setSonEcran(const Ecran& sonEcran) {
		this->sonEcran = sonEcran;
	}

	const Camera& getSaCamera() const {
		return saCamera;
	}

	void setSaCamera(const Camera& saCamera) {
		this->saCamera = saCamera;
	}

	/**
	 * Surchage de l'operateur d'affichage pour la scene
	 */
	friend ostream& operator<<(ostream& os, const Scene& scene);

};







#endif /* SCENE_HPP_ */
