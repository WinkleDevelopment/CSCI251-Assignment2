/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/

#include "ManagerialTeam.h"

// Constructors
ManagerialTeam::ManagerialTeam() {}

ManagerialTeam::ManagerialTeam(map<Characteristic, float> characteristics, string areaRepresent, float) : Human(characteristics, areaRepresent) {}

ManagerialTeam::~ManagerialTeam() {}

ManagerialTeam::ManagerialTeam(const ManagerialTeam& copyManagerialTeam) {}

// Methods
void ManagerialTeam::eventHandle(float, float) {}