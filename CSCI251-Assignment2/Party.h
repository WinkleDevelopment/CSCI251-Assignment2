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
#include "Candidate.h"
#include "ManagerialTeam.h"
#include "Libraries.h"

class Party {
private:
	Candidate leader;
	map<string, Candidate> candidates;
	ManagerialTeam MngTeam;
	unsigned int votes;
public:
	Party();
	Party(Candidate, map<string, Candidate>, ManagerialTeam, unsigned int);
	~Party();
	Party(const Party& copyParty);

	Candidate getLeader() { return leader; }
	map<string, Candidate> getCandidates() { return candidates; }
	Human getMngTeam() { return MngTeam; }
	unsigned int getVotes() { return votes; }
};
