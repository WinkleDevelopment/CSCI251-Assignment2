/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/

#include "Party.h"

// Constructors
Party::Party() {}

Party::Party(Candidate _leader, map<string, Candidate> _candidates, Human _MngTeam, unsigned int _votes) {
	this->leader = _leader;
	this->candidates = _candidates;
	this->MngTeam = _MngTeam;
	this->votes = _votes;
}

Party::~Party() {
	cout << "Object Destoryed!" << endl;
}

Party::Party(const Party& copyParty) {
	this->leader = copyParty.leader;
	this->candidates = copyParty.candidates;
	this->MngTeam = copyParty.MngTeam;
	this->votes = copyParty.votes;
}

// Methods
