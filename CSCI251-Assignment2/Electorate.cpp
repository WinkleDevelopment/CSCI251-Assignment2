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

Electorate::Electorate(string name, vector<Stance> stanceValues, unsigned int popul, string, map<string, Group>, unsigned int) : Group(name, stanceValues, popul) {}

Electorate::~Electorate() {}

Electorate::Electorate(const Electorate& copyElectorate) {}


// Methods
