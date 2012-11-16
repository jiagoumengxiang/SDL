/*
 * IView.h
 *
 *  Created on: 2012-11-13
 *      Author: kingcc
 */

#ifndef IVIEW_H_
#define IVIEW_H_
#include "SDL/SDL.h"

namespace std {

class I_View {
protected:
	int X = 0;
	int Y = 0;
	int Width = 0;
	int Height = 0;

public:
	virtual void Draw(SDL_Surface* _screen)=0;
	virtual ~I_View() {
	}
};

} /* namespace std */
#endif /* IVIEW_H_ */
