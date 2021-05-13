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
#include "Electorate.h"
#include "ManagerialTeam.h"
#include "Event.h"
#include "RandomEng.h"
#include "Libraries.h"

class ElectionGenerator {
private:
	vector<Event> elecEvent;
	vector<Issue> issues;
	vector<float> partiesStanceRanges;
public:
	ElectionGenerator();
	ElectionGenerator(vector<Event>, vector<Issue>, vector<float>);
	~ElectionGenerator();
	ElectionGenerator(const ElectionGenerator& copyElectionGenerator);

	vector<Event> getElecEvent() { return elecEvent; }
	vector<Issue> getIssues() { return issues; }
	vector<float> getPartiesStanceRange() { return partiesStanceRanges; }

	Candidate generateCandidate(string, vector<vector<float>>, string);
	map<Characteristic, float> generateChar(Characteristic);
	vector<Group> generateGroup(int, int);
	vector<Stance> generateStance(vector<vector<float>>, float);
	vector<Party> generateParties(unsigned int, vector<Electorate>);
	vector<Electorate> generateElectorates(unsigned int);
	void vote(vector<Party>, vector<Electorate>);
	void generateMngrTeam(string, string);
	void loadIssues();
	void loadEvents();
	Event getEvent();
	float processEvent(Event, Candidate);
	void handleEvent(ManagerialTeam, Event, float, int, string);
};

