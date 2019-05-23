/*
 * MinusOperator.h
 *
 *  Created on: 16.05.2019
 *      Author: iancea
 */

#include<iostream>
using namespace std;
#include"Operator.h"
#ifndef MINUSOPERATOR_H_
#define MINUSOPERATOR_H_

namespace std {

class MinusOperator : public Operator {
public:
	MinusOperator();
	virtual ~MinusOperator();
};

} /* namespace std */

#endif /* MINUSOPERATOR_H_ */
