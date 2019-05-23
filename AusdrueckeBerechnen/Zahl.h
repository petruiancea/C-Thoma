/*
 * Zahl.h
 *
 *  Created on: 16.05.2019
 *      Author: iancea
 */

#include<iostream>
using namespace std;
#ifndef ZAHL_H_
#define ZAHL_H_
#include "Knoten.h"

namespace std {

class Zahl : public Knoten {
public:
	Zahl();
	virtual ~Zahl();

	double getWert() const {
		return wert;
	}

	void setWert(double wert) {
		this->wert = wert;
	}

private:
	double wert;
};

} /* namespace std */

#endif /* ZAHL_H_ */
