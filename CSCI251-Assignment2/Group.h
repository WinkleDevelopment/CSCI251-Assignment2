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
#include "Entity.h"
#include "Libraries.h"

class Group : public Entity {
private:
	unsigned int population;
public:
	Group();
	Group(string name, vector<Stance> stanceValues, unsigned int) : Entity(name, stanceValues) {}
	~Group();
	Group(const Group& copyGroup);

	unsigned int getPopulation() { return population; }
};

