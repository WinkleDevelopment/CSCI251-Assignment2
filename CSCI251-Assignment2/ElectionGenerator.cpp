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
ElectionGenerator::ElectionGenerator(vector<Event>, vector<Issue>, vector<float>) {}
ElectionGenerator::~ElectionGenerator() {}
ElectionGenerator::ElectionGenerator(const ElectionGenerator& copyElectionGenerator) {}

// Methods
Candidate ElectionGenerator::generateCandidate(string, vector<vector<float>>, string) {}

map<Characteristic, float> ElectionGenerator::generateChar(Characteristic) {}

vector<Group> ElectionGenerator::generateGroup(int, int) {}

vector<Stance> ElectionGenerator::generateStance(vector<vector<float>>, float) {}

vector<Party> ElectionGenerator::generateParties(unsigned int, vector<Electorate>) {}

vector<Electorate> ElectionGenerator::generateElectorates(unsigned int) {}

void ElectionGenerator::vote(vector<Party>, vector<Electorate>) {}

void ElectionGenerator::generateMngrTeam(string, string) {}

void ElectionGenerator::loadIssues() {}

void ElectionGenerator::loadEvents() {}

Event ElectionGenerator::getEvent() {}

float ElectionGenerator::processEvent(Event, Candidate) {}

void ElectionGenerator::handleEvent(ManagerialTeam, Event, float, int, string) {}
