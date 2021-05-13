/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/

#include "Human.h"
#include "Libraries.h"

class ManagerialTeam : public Human {
private:
	float eventImpact;
public:
	float getEventImpact() { return eventImpact; }

	void eventHandle(float, float);
};

