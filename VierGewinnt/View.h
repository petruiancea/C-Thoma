/*
 * View.h
 *
 *  Created on: 28.05.2019
 *      Author: iancea
 */

#ifndef VIEW_H_
#define VIEW_H_

class Model;



class View {
public:
	View();
	virtual ~View();
	Model* getModel() const;
	void setModel(Model* model);
	void draw();

private:
	Model *model;

};


#endif /* VIEW_H_ */
