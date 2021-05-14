/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/

#include "Entity.h"

// Constructors
Entity::Entity() {}

Entity::Entity(string _name, vector<Stance> _stanceValues) {
	this->name = _name;
	this->stanceValues = _stanceValues;
}

Entity::~Entity() {
	cout << "Object Destoryed!" << endl;
}

Entity::Entity(const Entity& copyEntity) {
	this->name = copyEntity.name;
	this->stanceValues = copyEntity.stanceValues;
}


// Methods
