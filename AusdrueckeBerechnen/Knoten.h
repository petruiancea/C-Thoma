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

	void setValue(int neueValue);

private:
	int value;

};

} /* namespace std */

#endif /* KNOTEN_H_ */
