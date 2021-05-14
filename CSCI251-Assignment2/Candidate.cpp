/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/

#include "Candidate.h"

// Constructors
Candidate::Candidate() {}

Candidate::Candidate(map<Characteristic, float> _characteristics, string _areaRepresent, int _voteCount) : Human(_characteristics, _areaRepresent) {
	this->characteristics = _characteristics;
	this->areaRepresent = _areaRepresent;
	this->voteCount = _voteCount;
}

Candidate::~Candidate() {
	cout << "Object Destoryed!" << endl;
}

Candidate::Candidate(const Candidate& copyCandidate) {
	this->characteristics = copyCandidate.characteristics;
	this->areaRepresent = copyCandidate.areaRepresent;
	this->voteCount = copyCandidate.voteCount;
}

// Methods
void Candidate::influenceElec(float) {}

void Candidate::updateVote(int) {}