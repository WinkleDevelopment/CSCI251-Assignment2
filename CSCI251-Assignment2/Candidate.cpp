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

Candidate::Candidate(map<Characteristic, float> characteristics, string areaRepresent, int) : Human(characteristics, areaRepresent) {}

Candidate::~Candidate() {}

Candidate::Candidate(const Candidate& copyCandidate) {}

// Methods
void Candidate::influenceElec(float) {}

void Candidate::updateVote(int) {}