/*
 * CMonster.cpp
 *
 *  Created on: 2012-11-16
 *      Author: kingcc
 */

#include "CMonster.h"
#include "CImgBox.h"

namespace std {

CMonster::CMonster() {
	//初始化角色图片
		this->pcharacterImg=CImgBox::GetImgBoxSurface();
		//初始化所选角色
		this->pcharcterRect.x=492;
		this->pcharcterRect.y=342;
		this->pcharcterRect.w=29;
		this->pcharcterRect.h=42;
		//初始化初始位置
		this->ppositionRect.x=600;
		this->ppositionRect.y=500;
		this->ppositionRect.w=29;
		this->ppositionRect.h=42;
}

CMonster::~CMonster() {
}

void CMonster::Draw(SDL_Surface* _screen){
	SDL_BlitSurface(this->pcharacterImg,&this->pcharcterRect,_screen,&this->ppositionRect);
}
void CMonster::Logic(){
}
} /* namespace STD */
