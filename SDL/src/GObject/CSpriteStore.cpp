/*
 * CSpriteStore.cpp
 *
 *  Created on: 2012-11-17
 *      Author: kingcc
 */

#include "CSpriteStore.h"

namespace std {

CSpriteStore::CSpriteStore() {
	this->idSeed = 0;
}

CSpriteStore::~CSpriteStore() {
}

void CSpriteStore::Add(CSprite* _pSprite, bool _isWithoutId ) {
	if (_isWithoutId) {
		_pSprite->SetId(++idSeed);
	}
	sprites[idSeed] = _pSprite;
}
CSprite* CSpriteStore::GetById(int _id) {
	return sprites[_id];
}

map<int,CSprite*>* CSpriteStore::GetSprites() {
	return &sprites;
}

} /* namespace STD */
