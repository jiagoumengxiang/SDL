/*
 * 精灵盒子
 * 所有精灵引用存放在这个位置
 * 方便查找
 *
 *  Created on: 2012-11-17
 *      Author: kingcc
 */

#ifndef CSPRITESTORE_H_
#define CSPRITESTORE_H_

#include <map>
#include "CSprite.h"

namespace std {

class CSpriteStore {

private:
	map<int,CSprite*> sprites;
	int idSeed;
public:
	CSpriteStore();
	virtual ~CSpriteStore();
	void Add(CSprite* _pSprite, bool _isWithoutId = true );
	CSprite* GetById(int);
	map<int,CSprite*>*  GetSprites();
};

} /* namespace STD */
#endif /* CSPRITESTORE_H_ */
