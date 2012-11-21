/*
 * IView.h
 *
 *  Created on: 2012-11-13
 *      Author: kingcc
 */

#ifndef ILOGIC_H_
#define ILOGIC_H_

#include "CGod.h"

namespace std {

class I_Logic {
public:
	virtual void Logic(CGod* pGod)=0;
	virtual ~I_Logic(){};
};

} /* namespace std */
#endif /* IVIEW_H_ */
