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
#include "Libraries.h"

class Electorate : public Group {
private:
	string area;
	map<string, Group> groups;
	unsigned int population;
public:
	Electorate();
	Electorate(string name, vector<Stance> stanceValues, unsigned int popul, string, map<string, Group>, unsigned int) : Group(name, stanceValues, population) {}
	~Electorate();
	Electorate(const Electorate& copyElectorate);

	string getArea() { return area; }
	map<string, Group> getGroups() { return groups; }
	unsigned int getPopulation() { return population; }
};

