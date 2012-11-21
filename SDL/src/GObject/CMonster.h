/*
 * CMonster.h
 * 怪物类
 * 可以打的怪物
 *  Created on: 2012-11-16
 *      Author: kingcc
 */

#ifndef CMONSTER_H_
#define CMONSTER_H_

#include "CSprite.h"


namespace std {

class CMonster : public CSprite{
public:
	CMonster();
	virtual ~CMonster();

	void Logic(CGod* pGod);
	void Draw(SDL_Surface* _screen);
};

} /* namespace STD */
#endif /* CMONSTER_H_ */
