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

namespace std {

class CSprite: public I_Logic, public I_View {
public:
	CSprite();
	virtual ~CSprite();
};

} /* namespace std */
#endif /* CSPRITE_H_ */
