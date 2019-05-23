/*
 * Knoten.h
 *
 *  Created on: 16.05.2019
 *      Author: iancea
 */

#ifndef KNOTEN_H_
#define KNOTEN_H_
#include<iostream>
using namespace std;

namespace std {

class Knoten {
public:
	Knoten();
	virtual ~Knoten();

	void virtual getValue() = 0;

private:
	double value;
};

} /* namespace std */

#endif /* KNOTEN_H_ */
