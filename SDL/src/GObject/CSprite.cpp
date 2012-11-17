/*
 * CSprite.cpp
 *
 *  Created on: 2012-11-13
 *      Author: kingcc
 */

#include "CSprite.h"

namespace std {

CSprite::CSprite() {
}

CSprite::~CSprite() {
}

int CSprite::GetId(){
	return sid;
}
void CSprite::SetId(int _id){
	sid=_id;
}

} /* namespace std */
