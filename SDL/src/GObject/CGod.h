/*
 * CGod.h
 *
 *  Created on: 2012-11-13
 *      Author: kingcc
 */

#ifndef CGOD_H_
#define CGOD_H_

#include "ILogic.h"

namespace std {

class CGod : public I_Logic{

public:
	CGod();
	virtual ~CGod();
	void Logic();
};

} /* namespace std */
#endif /* CGOD_H_ */
