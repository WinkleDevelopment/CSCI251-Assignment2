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
#include "Libraries.h"

class Election {
private:
	const static unsigned int partyNum;
	unsigned int electorateNum;
	vector<Party> parties;
	vector<Electorate> electorates;
	Campaign campaign;
public:
	unsigned int getPartyNum() { return partyNum; }
	unsigned int getElectorateNum() { return electorateNum; }
	vector<Party> getParties() { return parties; }
	vector<Electorate> getElectorate() { return electorates; }
	Campaign getCampign() { return campaign; }

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