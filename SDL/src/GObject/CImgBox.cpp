/*
 * CImgBox.cpp
 *
 *  Created on: 2012-11-16
 *      Author: kingcc
 */

#include "CImgBox.h"
#include "SDL/SDL.h"

namespace std{

CImgBox::CImgBox() {
	pimg=SDL_LoadBMP("resource/character.bmp");
}

CImgBox::~CImgBox() {
	SDL_FreeSurface(pimg);
}

CImgBox* CImgBox::pimgBox=0;

SDL_Surface* CImgBox::GetImgBoxSurface(){
	if(pimgBox==0){
		pimgBox=new CImgBox();
	}

	return pimgBox->pimg;
}

}
