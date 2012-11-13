/*
 * IView.h
 *
 *  Created on: 2012-11-13
 *      Author: kingcc
 */

#ifndef IVIEW_H_
#define IVIEW_H_

namespace std {

class I_View {
public:
	virtual void Draw(SDL_Surface* _screen)=0;
};

} /* namespace std */
#endif /* IVIEW_H_ */
