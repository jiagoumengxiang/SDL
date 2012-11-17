/*
 * CImgBox.h
 *
 * 由ImgBox载入整个图片
 * 返回大图片的某一部分Surface
 *
 *  Created on: 2012-11-16
 *      Author: kingcc
 */

#ifndef CIMGBOX_H_
#define CIMGBOX_H_

#include "SDL/SDL.h"

namespace std{

class CImgBox {
private:
	static CImgBox* pimgBox ;
	CImgBox();
	SDL_Surface* pimg;

public:
	/**
	 * 加载图片
	 */
	virtual ~CImgBox();
	static SDL_Surface*  GetImgBoxSurface();

};

}
#endif /* CIMGBOX_H_ */
