/*
 * Paket.cpp
 *
 *  Created on: 30.04.2019
 *      Author: iancea
 */


#include "Paket.h"

Paket::Paket()
{

	cout << "Konstruktor Klasse Paket aufgerufen" << endl;
}

Paket::~Paket()
//gewicht (0.0), status(LEER);
{
	cout << "Destruktor Klasse Paket aufgerufen" << endl;
}

void Paket::setName(string neuerName)
{
	name = neuerName;
	cout << "Neuer Name: " << name << endl;
}

void Paket::setAdresse(string neueAdresse)
{
	adresse = neueAdresse;
	cout << "Neue Adresse: " << adresse << endl;
}

void Paket::setGewicht(float neuesGewicht)
{
	gewicht = neuesGewicht;
	cout << "Neues Gewicht: " << gewicht << endl;
}

void Paket::setOrt(string neuerOrt)
{
	ort = neuerOrt;
	cout << "Neuer Ort: " << ort << endl;
}

void Paket::setStatus(statusWerte neuerStatus)
{
	status = neuerStatus;
	cout << "Neuer Status: ";
	switch(status) {
		case Paket::LEER: cout << "LEER" << endl; break;
		case Paket::GEPACKT: cout << "GEPACKT" << endl; break;
		case Paket::VERSAND: cout << "VERSAND" << endl; break;
		case Paket::ZUGESTELLT: cout << "ZUGESTELLT" << endl; break;
		default: cout << "Undefinierter Zustand: " << status << endl;
	}
}



