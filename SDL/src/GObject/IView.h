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

	SDL_Surface* pcharacterImg;
	SDL_Rect pcharcterRect;
	SDL_Rect ppositionRect;

public:
	virtual void Draw(SDL_Surface* _screen)=0;
	virtual ~I_View() {
	}
};

} /* namespace std */
#endif /* IVIEW_H_ */
