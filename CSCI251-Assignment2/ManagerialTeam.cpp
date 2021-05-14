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

ManagerialTeam::ManagerialTeam(map<Characteristic, float> _characteristics, string _areaRepresent, float _eventImpact) : Human(_characteristics, _areaRepresent) {
	this->characteristics = _characteristics;
	this->areaRepresent = _areaRepresent;
	this->eventImpact = _eventImpact;
}

ManagerialTeam::~ManagerialTeam() {
	cout << "Object Destoryed!" << endl;
}

ManagerialTeam::ManagerialTeam(const ManagerialTeam& copyManagerialTeam) {
	this->characteristics = copyManagerialTeam.characteristics;
	this->areaRepresent = copyManagerialTeam.areaRepresent;
	this->eventImpact = copyManagerialTeam.eventImpact;
}

// Methods
void ManagerialTeam::eventHandle(float, float) {}