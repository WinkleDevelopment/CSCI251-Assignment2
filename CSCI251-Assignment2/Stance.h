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
#include "Issue.h"
#include "Libraries.h"

class Stance {
private:
	float approach = 0;
	float significant = 0;
	float influentRadius = 0;
	Issue issue;
public:
	Stance();
	Stance(float, float, float, Issue);
	~Stance();
	Stance(const Stance& copyStance);

	float getApproach() { return approach; }
	float getSignificant() { return significant; }
	float getInfluentRadius() { return influentRadius; }
	Issue getIssue() { return issue; }

	void updateRadius(int);
	void changeSignificant(float);
	void chnageApproach(float);
	float difference(Stance);

};

