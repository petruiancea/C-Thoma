/*
 * Controller.h
 *
 *  Created on: 28.05.2019
 *      Author: iancea
 */

#ifndef CONTROLLER_H_
#define CONTROLLER_H_
#include"Model.h"

//Eingabe abfordern, Benutzer wechseln
//while kein Gewinner treu
//while(true){
//	if(keine 4 gleiche Zeichen) weitere steine einfügen
//	else
//}

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
