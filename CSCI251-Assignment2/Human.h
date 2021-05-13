/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/

#include "Libraries.h"

enum Characteristic {
	CONNECTION,
	ECONOMIC_EXP,
	ENVIRONMENTAL_EXP,
	EMPLOYMENT_EXP,
	SCANDLE_EXP,
	HEALTHCARE_EXP,
	INFLUENCE,
	POPULARITY,
	DEBATE_EXP
};

class Human {
protected:
	map<Characteristic, float> characteristics;
	string areaRepresent;
public:
	Human();
	Human(map<Characteristic, float>, string);
	~Human();
	Human(const Human& copyHuman);

	map<Characteristic, float> getCharacteristics() { return characteristics; }
	string getAreaRepresent() { return areaRepresent; }

	void updateChar(Characteristic, float);
};

