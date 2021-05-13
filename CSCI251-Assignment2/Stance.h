/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/

#include "Issue.h"
#include "Libraries.h"

class Stance {
private:
	float approach;
	float significant;
	float influentRadius;
	Issue issue;
public:
	Stance();
	Stance(float, float, float, Issue);
	~Stance();
	Stance(const Stance& copyStance);



};

