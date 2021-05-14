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
#include "Group.h"
#include "Libraries.h"

class Electorate : public Group {
private:
	string area;
	map<string, Group> groups;
public:
	Electorate();
	Electorate(string _name, vector<Stance> _stanceValues, unsigned int _population, string, map<string, Group>) : Group(_name, _stanceValues, _population) {}
	~Electorate();
	Electorate(const Electorate& copyElectorate);

	string getArea() { return area; }
	map<string, Group> getGroups() { return groups; }
};

