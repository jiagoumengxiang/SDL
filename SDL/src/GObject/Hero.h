/*
 * Hero.h
 *
 *  Created on: 2012-11-16
 *      Author: kingcc
 */

#ifndef HERO_H_
#define HERO_H_

#include "CSprite.h"

namespace std {

class Hero : public CSprite {
public:
	Hero();
	virtual ~Hero();

	void Logic();
	void DealInput(SDLKey _key);
	void Draw(SDL_Surface* _screen);
};

} /* namespace STD */
#endif /* HERO_H_ */
