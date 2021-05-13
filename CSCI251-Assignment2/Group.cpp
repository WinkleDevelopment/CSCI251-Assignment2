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

Group::Group(string name, vector<Stance> stanceValues, unsigned int) : Entity(name, stanceValues) {}

Group::~Group() {}

Group::Group(const Group& copyGroup) {}

// Methods
