/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/

#include "Group.h"

// Constructors
Group::Group() {}

Group::Group(string _name, vector<Stance> _stanceValues, unsigned int _population) : Entity(_name, _stanceValues) {
	this->name = _name;
	this->stanceValues = _stanceValues;
	this->population = _population;
}

Group::~Group() {
	cout << "Object Destoryed!" << endl;
}

Group::Group(const Group& copyGroup) {
	this->name = copyGroup.name;
	this->stanceValues = copyGroup.stanceValues;
	this->population = copyGroup.population;
}

// Methods
