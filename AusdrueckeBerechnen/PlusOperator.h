/*
 * PlusOperator.h
 *
 *  Created on: 16.05.2019
 *      Author: iancea
 */

#include<iostream>
#include"Operator.h"
using namespace std;
#ifndef PLUSOPERATOR_H_
#define PLUSOPERATOR_H_

namespace std {

class PlusOperator : public Operator {
public:
	PlusOperator();
	virtual ~PlusOperator();
};

} /* namespace std */

#endif /* PLUSOPERATOR_H_ */
