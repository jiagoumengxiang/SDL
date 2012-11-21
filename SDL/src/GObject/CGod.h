/*
 * CGod.h
 *
 *  Created on: 2012-11-13
 *      Author: kingcc
 */

#ifndef CGOD_H_
#define CGOD_H_

#include "KeyStatus.h"

namespace std {

class CGod{
public:
	int dtX;
	int dtY;
	CGod();
	virtual ~CGod();
	void Logic();
	void DealInput(KeyStatus* pKey);
};

} /* namespace std */
#endif /* CGOD_H_ */
