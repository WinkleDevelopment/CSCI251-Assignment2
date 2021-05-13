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
#include "Libraries.h"
#include "Party.h"
#include "Electorate.h"
//#include "ElectionGenerator.h"
#include "Campaign.h"

class Election {
private:
	const static unsigned int partyNum;
	unsigned int electorateNum;
	vector<Party> parties;
	vector<Electorate> electorates;
	Campaign campaign;
public:
	Election();
	Election(const static unsigned int, unsigned int, vector<Party>, vector<Electorate>, Campaign);
	~Election();
	Election(const Election& copyElection);

	unsigned int getPartyNum() { return partyNum; }
	unsigned int getElectorateNum() { return electorateNum; }
	vector<Party> getParties() { return parties; }
	vector<Electorate> getElectorate() { return electorates; }
	Campaign getCampaign() { return campaign; }

	void partyReport();
	void electorateReport();
	void electionreport();
};
const unsigned int partyNum = 3;

int main();

/*DEATH_PENALTY,
GENDER_IDENTITY,
HATE_SPEECH,
EUTHANASIA,
SAFE_SPACES*/