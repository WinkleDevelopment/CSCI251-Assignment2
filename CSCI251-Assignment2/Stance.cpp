/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/

#include "Stance.h"

// Constructors
Stance::Stance() {}

Stance::Stance(float _approach, float _significant, float _influentRadius, Issue _issue) {
	this->approach = _approach;
	this->significant = _significant;
	this->influentRadius = _influentRadius;
	this->issue = _issue;
}

Stance::~Stance() {
	cout << "Object Destoryed!" << endl;
}

Stance::Stance(const Stance& copyStance) {
	this->approach = copyStance.approach;
	this->significant = copyStance.significant;
	this->influentRadius = copyStance.influentRadius;
	this->issue = copyStance.issue;
}

// Methods
void Stance::updateRadius(int) {}

void Stance::changeSignificant(float) {}

void Stance::chnageApproach(float) {}

float Stance::difference(Stance) {
	return 0;
}

