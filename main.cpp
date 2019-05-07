/*
 * main.cpp
 *
 *  Created on: 30.04.2019
 *      Author: iancea
 */

#include "Paket.h"
#include<iostream>
#include<memory>
using namespace std;

int main()
{
	//2. Aufgabe statisch deklarieren;
	//Objekt erstellen;
	//Paket meinPaket;

	//3. Aufgabe mit Pointer, dynamisch deklarieren;
	//Paket *meinPaket = new Paket;

	//4. Aufgabe, unique
	unique_ptr<Paket> meinPaket = make_unique<Paket>();

	meinPaket->setName("Peter Schmidt");
	meinPaket->setAdresse("Nibelungenplatz 1");
	meinPaket->setGewicht(1.3);
	meinPaket->setOrt("Frankfurt am Main");
	meinPaket->setStatus(Paket::ZUGESTELLT);
	cout << "Ihr Paket wurde erfolgreich zugestellt" << endl;

	//delete meinPaket;
	//nicht für 4. Aufgabe relevant;
	//meinPaket = NULL; //Zeigen auf 0 setzen, am besten tut man das immer, denn es kann vorkommen, dass man den Zeiger nochmal irgendwo benutzt
	//nicht für 4. Aufgabe relevant;

	return 0;
}


