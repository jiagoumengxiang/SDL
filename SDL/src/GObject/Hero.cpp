/*
 * Hero.cpp
 *
 *  Created on: 2012-11-16
 *      Author: kingcc
 */

#include "Hero.h"
#include "CImgBox.h"
#include "SDL/SDL.h"
#include "KeyStatus.h"
#include "CGod.h"

namespace std {

Hero::Hero() {
	//初始化角色图片
	this->pcharacterImg = CImgBox::GetImgBoxSurface();
	//初始化所选角色
	this->pcharcterRect.x = 61;
	this->pcharcterRect.y = 6;
	this->pcharcterRect.w = 21;
	this->pcharcterRect.h = 41;
	//初始化初始位置
	this->ppositionRect.x = 490;
	this->ppositionRect.y = 280;
	this->ppositionRect.w = 21;
	this->ppositionRect.h = 41;
}

Hero::~Hero() {
}

void Hero::Draw(SDL_Surface* _screen) {
	//绘制体力条,精神条


	//绘制英雄位置
	SDL_BlitSurface(this->pcharacterImg, &this->pcharcterRect, _screen,
			&this->ppositionRect);
}

void Hero::Logic(CGod* pGod) {

}

void Hero::DealInput(KeyStatus* pKey) {
	//keybroad event
	switch (pKey->val) {
	case SDLK_a:
		this->ppositionRect.x -= 5;
		break;
	case SDLK_d:
		this->ppositionRect.x += 5;
		break;
	case SDLK_s:
		this->ppositionRect.y += 5;
		break;
	case SDLK_w:
		this->ppositionRect.y -= 5;
		break;
	default:
		break;
	}
}

} /* namespace STD */
