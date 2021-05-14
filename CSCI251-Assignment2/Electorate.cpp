/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/

#include "Electorate.h"

// Constructors
Electorate::Electorate() {}

Electorate::Electorate(string _name, vector<Stance> _stanceValues, unsigned int _population, string _area, map<string, Group> _groups) : Group(_name, _stanceValues, _population) {
	this->name = _name;
	this->stanceValues = _stanceValues;
	this->population = _population;
	this->area = _area;
	this->groups = _groups;
}

Electorate::~Electorate() {
	cout << "Object Destoryed!" << endl;
}

Electorate::Electorate(const Electorate& copyElectorate) {
	this->name = copyElectorate.name;
	this->stanceValues = copyElectorate.stanceValues;
	this->population = copyElectorate.population;
	this->area = copyElectorate.area;
	this->groups = copyElectorate.groups;
}


// Methods
