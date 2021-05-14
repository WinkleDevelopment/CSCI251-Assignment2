/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/

#include "Election.h"

// Constructors
Election::Election() {}

Election::Election(unsigned int _electorateNum, vector<Party> _parties, vector<Electorate> _electorates, Campaign* _campaign) {
	this->electorateNum = _electorateNum;
	this->parties = _parties;
	this->electorates = _electorates;
	this->campaign = _campaign;
}

Election::~Election() {
	cout << "Object Destoryed!" << endl;
}

Election::Election(const Election& copyElection) {
	this->electorateNum = copyElection.electorateNum;
	this->parties = copyElection.parties;
	this->electorates = copyElection.electorates;
	this->campaign = copyElection.campaign;
}


// Methods
void Election::partyReport() {}

void Election::electorateReport() {}

void Election::electionreport() {}

// Complie Method
int main() {

	cout << "Test Message" << endl;
	return 1;

}