/*
 * Operator.h
 *
 *  Created on: 16.05.2019
 *      Author: iancea
 */

#include<iostream>
#include"Knoten.h"
using namespace std;
#ifndef OPERATOR_H_
#define OPERATOR_H_

namespace std {

class Operator : public Knoten {
public:
	Operator();
	virtual ~Operator();
};

} /* namespace std */

#endif /* OPERATOR_H_ */
