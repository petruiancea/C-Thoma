/*
 * View.cpp
 *
 *  Created on: 28.05.2019
 *      Author: iancea
 */

#include "View.h"


View::View() {
	// TODO Auto-generated constructor stub

}

View::~View() {
	// TODO Auto-generated destructor stub
}

Model* View::getModel() const {
	return model;
}

void View::setModel(Model* model) {
	this->model = model;
}
