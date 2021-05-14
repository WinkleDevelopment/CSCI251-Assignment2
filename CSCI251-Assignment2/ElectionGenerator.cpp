/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/

#include "ElectionGenerator.h"

// Constructors
ElectionGenerator::ElectionGenerator() {}

ElectionGenerator::ElectionGenerator(vector<Event> _elecEvent, vector<Issue> _issues, vector<float> _partiesStanceRanges) {
	this->elecEvent = _elecEvent;
	this->issues = _issues;
	this->partiesStanceRanges = _partiesStanceRanges;
}

ElectionGenerator::~ElectionGenerator() {
	cout << "Object Destoryed!" << endl;
}

ElectionGenerator::ElectionGenerator(const ElectionGenerator& copyElectionGenerator) {
	this->elecEvent = copyElectionGenerator.elecEvent;
	this->issues = copyElectionGenerator.issues;
	this->partiesStanceRanges = copyElectionGenerator.partiesStanceRanges;
}


// Methods
Candidate ElectionGenerator::generateCandidate(string, vector<vector<float>>, string) {
	Candidate null;
	return null;
}

map<Characteristic, float> ElectionGenerator::generateChar(Characteristic) {
	map<Characteristic, float> null;
	return null;
}

vector<Group> ElectionGenerator::generateGroup(int, int) {
	vector<Group> null;
	return null;
}

vector<Stance> ElectionGenerator::generateStance(vector<vector<float>>, float) {
	vector<Stance> null;
	return null;
}

vector<Party> ElectionGenerator::generateParties(unsigned int, vector<Electorate>) {
	vector<Party> null;
	return null;
}

vector<Electorate> ElectionGenerator::generateElectorates(unsigned int) {
	vector<Electorate> null;
	return null;
}

void ElectionGenerator::vote(vector<Party>, vector<Electorate>) {}

void ElectionGenerator::generateMngrTeam(string, string) {}

void ElectionGenerator::loadIssues() {}

void ElectionGenerator::loadEvents() {}

Event ElectionGenerator::getEvent() {
	Event null;
	return null;
}

float ElectionGenerator::processEvent(Event, Candidate) {
	return 0.0;
}

void ElectionGenerator::handleEvent(ManagerialTeam, Event, float, int, string) {}
