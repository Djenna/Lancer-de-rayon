/*
 * Position.hpp
 *
 *  Created on: 6 déc. 2017
 *      Author: Djenna
 */

#ifndef POSITION_HPP_
#define POSITION_HPP_

class Position{

	private:
		int x;
		int y;
		int z;

	public:
	Position();
	Position(int x, int y, int z);

	//SETTERS-GETTERS
	void setx(int x);
	void sety(int y);
	void setz(int z);

	int getx();
	int gety();
	int getz();

	};


#endif /* POSITION_HPP_ */
