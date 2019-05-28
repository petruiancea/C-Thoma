/*
 * Model.cpp
 *
 *  Created on: 28.05.2019
 *      Author: iancea
 */

#include "Model.h"

Model::Model() {
	// TODO Auto-generated constructor stub

}

Model::~Model() {
	// TODO Auto-generated destructor stub
}

View* Model::getView() const {
	return view;
}

void Model::setView(View* view) {
	this->view = view;
}
