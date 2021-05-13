/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/

#pragma once
#include "Libraries.h"
#include "Stance.h"

class Entity {
protected:
	string name;
	vector<Stance> stanceValues;
public:
	Entity();
	Entity(string, vector<Stance>);
	~Entity();
	Entity(const Entity& copyEntity);

	string getName() { return name; }
	vector<Stance> getStanceValues() { return stanceValues; }
};

