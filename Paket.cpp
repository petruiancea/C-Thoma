/*
 * Paket.cpp
 *
 *  Created on: 30.04.2019
 *      Author: iancea
 */


#include "Paket.h"

Paket::Paket()
{
	gewicht = 0.0;
	status = LEER;
	cout << "Konstruktor Klasse Paket aufgerufen" << endl;
}

Paket::~Paket()
{
	cout << "Destruktor Klasse Paket aufgerufen" << endl;
}

void Paket::setAdresse(string neueAdresse)
{
	adresse = neueAdresse;
}

