/*
 * Paket.h
 *
 *  Created on: 30.04.2019
 *      Author: iancea
 */

#ifndef PAKET_H_
#define PAKET_H_
#include<iostream>
#include<string>
using namespace std;


class Paket {
public:
	Paket(); //da keine Implementierung vorhanden ist, Semikolon ; gesetzt
	virtual ~Paket();

	enum statusWerte{LEER, GEPACKT, VERSAND, ZUGESTELLT}; //eigentlich ein integer,
														//aber Compiler kann ein check machen,
														//also ueberpruefen

	void setName(string neuerName); //{ name = n;}
	void setAdresse (string neueAdresse); // { adresse = adr;}
	void setOrt (string neuerOrt) ;//{ ort = o;}
	void setGewicht (float neuesGewicht);//  { gewicht = g;}
	void setStatus (statusWerte neuerStatus);


	string leseName(void) const;
	string leseAdresse (void)const;
	string leseOrt (void) const;
	float leseGewicht (void) const;
	statusWerte leseStatus (void) const;


private:
	string name;
	string adresse;
	string ort;
	float gewicht;
	statusWerte status; //enum statuswerte wird hier als private deklariert



};
#endif /* PAKET_H_ */
