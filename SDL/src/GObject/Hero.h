/*
 * Hero.h
 *
 *  Created on: 2012-11-16
 *      Author: kingcc
 */

#ifndef HERO_H_
#define HERO_H_

#include "CSprite.h"
#include "KeyStatus.h"

namespace std {

class Hero : public CSprite {
private:
	int strength;//体力
	int spirit;//精神

public:
	Hero();
	virtual ~Hero();

	void Logic(CGod* pGod);
	void DealInput(KeyStatus* pKey);
	void Draw(SDL_Surface* _screen);
};

} /* namespace STD */
#endif /* HERO_H_ */
