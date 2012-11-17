/*
 * Hero.cpp
 *
 *  Created on: 2012-11-16
 *      Author: kingcc
 */

#include "Hero.h"
#include "CImgBox.h"
#include "SDL/SDL.h"

namespace std {

Hero::Hero() {
	//初始化角色图片
	this->pcharacterImg=CImgBox::GetImgBoxSurface();
	//初始化所选角色
	this->pcharcterRect.x=61;
	this->pcharcterRect.y=6;
	this->pcharcterRect.w=21;
	this->pcharcterRect.h=41;
	//初始化初始位置
	this->ppositionRect.x=490;
	this->ppositionRect.y=280;
	this->ppositionRect.w=21;
	this->ppositionRect.h=41;
}

Hero::~Hero() {
}

void Hero::Draw(SDL_Surface* _screen){
	SDL_BlitSurface(this->pcharacterImg,&this->pcharcterRect,_screen,&this->ppositionRect);
}

void Hero::Logic(){

}

void Hero::DealInput(SDLKey _key){
	switch(_key){
	case SDLK_a:
		this->ppositionRect.x-=5;
		break;
	case SDLK_d:
		this->ppositionRect.x+=5;
		break;
	case SDLK_s:
		this->ppositionRect.y+=5;
		break;
	case SDLK_w:
		this->ppositionRect.y-=5;
		break;
	default:
	break;
	}
}


} /* namespace STD */
