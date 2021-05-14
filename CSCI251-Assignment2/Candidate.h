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

class Candidate : public Human {
private:
	int voteCount = 0;
	int popularity = 0;
public:
	Candidate();
	Candidate(map<Characteristic, float> _characteristics, string _areaRepresent, int, int);
	~Candidate();
	Candidate(const Candidate& copyCandidate);
	
	int getVoteCount() { return voteCount; }
	int getPopularity() { return popularity; }

	void influenceElec(float);
	void updateVote(int);
};

