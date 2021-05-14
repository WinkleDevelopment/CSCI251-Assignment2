/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/

#include "Human.h"

// Constructors
Human::Human() {}

Human::Human(map<Characteristic, float> _characteristics, string _areaRepresent) {
	this->characteristics = _characteristics;
	this->areaRepresent = _areaRepresent;
}

Human::~Human() {
	cout << "Object Destoryed!" << endl;
}

Human::Human(const Human& copyHuman) {
	this->characteristics = copyHuman.characteristics;
	this->areaRepresent = copyHuman.areaRepresent;
}

// Methods
void Human::updateChar(Characteristic, float) {}
