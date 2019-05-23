/*
 * DivisionOperator.h
 *
 *  Created on: 16.05.2019
 *      Author: iancea
 */

#include<iostream>
#include"Operator.h"
using namespace std;
#ifndef DIVISIONOPERATOR_H_
#define DIVISIONOPERATOR_H_

namespace std {

class DivisionOperator : public Operator {
public:
	DivisionOperator();
	virtual ~DivisionOperator();
};

} /* namespace std */

#endif /* DIVISIONOPERATOR_H_ */
