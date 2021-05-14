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
#include "Human.h"
#include "Libraries.h"

class ManagerialTeam : public Human {
private:
	float eventImpact = 0;
public:
	ManagerialTeam();
	ManagerialTeam(map<Characteristic, float> characteristics, string areaRepresent, float);
	~ManagerialTeam();
	ManagerialTeam(const ManagerialTeam& copyManagerialTeam);

	float getEventImpact() { return eventImpact; }
	void eventHandle(float, float);
};

