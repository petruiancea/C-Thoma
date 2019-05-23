/*
 * MalOperator.h
 *
 *  Created on: 16.05.2019
 *      Author: iancea
 */
#include<iostream>
using namespace std;
#include"Operator.h"
#ifndef MALOPERATOR_H_
#define MALOPERATOR_H_

namespace std {

class MalOperator : public Operator{
public:
	MalOperator();
	virtual ~MalOperator();
};

} /* namespace std */

#endif /* MALOPERATOR_H_ */
