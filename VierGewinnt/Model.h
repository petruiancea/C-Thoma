/*
 * Model.h
 *
 *  Created on: 28.05.2019
 *      Author: iancea
 */

#ifndef MODEL_H_
#define MODEL_H_

class View;

class Model {
public:
	Model();
	virtual ~Model();
	View* getView() const;
	void setView(View* view);

private:
	View *view;
	int board [6] [7];

};

#endif /* MODEL_H_ */
