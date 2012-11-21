/*
 * KeyStatus.h
 *
 *  Created on: 2012-11-18
 *      Author: kingcc
 */

#ifndef KEYSTATUS_H_
#define KEYSTATUS_H_

#include "SDL/SDL.h"

struct KeyStatus {
	SDLKey val;
	bool mouseEvent;
	int x;
	int y;
};



#endif /* KEYSTATUS_H_ */
