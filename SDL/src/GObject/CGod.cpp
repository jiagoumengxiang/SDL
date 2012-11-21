/*
 * CGod.cpp
 *
 *  Created on: 2012-11-13
 *      Author: kingcc
 */

#include "CGod.h"
#include "KeyStatus.h"
#include <math.h>

namespace std {
CGod::CGod() {
	dtX=0;
	dtY=0;
}

CGod::~CGod() {
}

void CGod::Logic(){

}

void CGod::DealInput(KeyStatus* pKey){
	//mouse event
			if (pKey->mouseEvent) {
				int a1 = pKey->x - 500;
				int b1 = pKey->y - 300;
				int c1 = sqrt(a1 * a1 + b1 * b1);
				if (c1 != 0) {
					int c2 =10;
					this->dtX=-(c2*a1/c1);
					this->dtY=-(c2*b1/c1);
				}
			}else{
				this->dtX=0;
				this->dtY=0;
			}
}
} /* namespace std */
