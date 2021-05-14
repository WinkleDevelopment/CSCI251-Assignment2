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
protected:
	unsigned int population = 0;
public:
	Group();
	Group(string _name, vector<Stance> _stanceValues, unsigned int);
	~Group();
	Group(const Group& copyGroup);

	unsigned int getPopulation() { return population; }
};

