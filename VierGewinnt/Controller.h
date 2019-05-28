/*
 * Controller.h
 *
 *  Created on: 28.05.2019
 *      Author: iancea
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_
#include"Model.h"

class Controller {

	enum Coin{
		EMPTY,
		PLAYER_X,
		PLAYER_0
	};
public:
	Controller();
	virtual ~Controller();
	Model* getModel() const;
	void setModel(Model* model);
	void gewinner();

private: 
	Model *model; 
	int coins;

};


#endif /* CONTROLLER_H_ */
