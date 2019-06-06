/*
 * Model.h
 *
 *  Created on: 28.05.2019
 *      Author: iancea
 */

#ifndef MODEL_H_
#define MODEL_H_

class View;

//bord array [6][7]

//Schleife um das nächte leere Feld zu finden thrown(column, array)

class Model {
public:
	Model();
	virtual ~Model();
	View* getView() const;
	void setView(View* view);
	//void thrown(column, coin)
	//	(view->draw)


private:
	View *view;
	int board [6] [7];


};

#endif /* MODEL_H_ */
