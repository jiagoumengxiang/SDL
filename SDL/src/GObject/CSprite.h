/*
 * CSprite.h
 *
 *  Created on: 2012-11-13
 *      Author: kingcc
 */

#ifndef CSPRITE_H_
#define CSPRITE_H_

#include "ILogic.h"
#include "IView.h"
#include "CGod.h"

namespace std {

class CSprite: public I_Logic, public I_View {
protected:
	int sid;
	int speed;

public:
	CSprite();
	virtual ~CSprite();
	virtual void Logic(CGod* pGod)=0;
	virtual void Draw(SDL_Surface* _screen)=0;
	virtual int GetId();
	virtual void SetId(int);
};

} /* namespace std */
#endif /* CSPRITE_H_ */
