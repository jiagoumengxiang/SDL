/*
 * CMonster.cpp
 *
 *  Created on: 2012-11-16
 *      Author: kingcc
 */

#include "CMonster.h"
#include "CImgBox.h"
#include <math.h>

namespace std {

CMonster::CMonster() {
	//初始化角色图片
	this->pcharacterImg = CImgBox::GetImgBoxSurface();
	//初始化所选角色
	this->pcharcterRect.x = 492;
	this->pcharcterRect.y = 342;
	this->pcharcterRect.w = 29;
	this->pcharcterRect.h = 42;
	//初始化初始位置
	this->ppositionRect.x = 600;
	this->ppositionRect.y = 500;
	this->ppositionRect.w = 29;
	this->ppositionRect.h = 42;

	this->speed = 8;
}

CMonster::~CMonster() {
}

void CMonster::Draw(SDL_Surface* _screen) {
	SDL_BlitSurface(this->pcharacterImg, &this->pcharcterRect, _screen,
			&this->ppositionRect);
}
void CMonster::Logic(CGod* pGod) {

	//偏移量移动
	this->ppositionRect.x += pGod->dtX;
	this->ppositionRect.y += pGod->dtY;

	//测量与玩家之间的距离
	int c = sqrt(
			(ppositionRect.x - 500) * (ppositionRect.x - 500)
					+ (ppositionRect.y - 300) * (ppositionRect.y - 300));
	//如果距离有20则使用冲锋技能
	if (c < 150) {
		//如果距离3以内 使用攻击
		if (c < 10) {
			this->speed = 0;
		} else {
			this->speed = 20;
		}
	} else {
		this->speed = 8;
	}
	//向玩家移动
	this->ppositionRect.x -= (this->speed * (this->ppositionRect.x - 500) / c);
	this->ppositionRect.y -= (this->speed * (this->ppositionRect.y - 300) / c);

}
} /* namespace STD */
