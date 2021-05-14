/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/
#include "Campaign.h"

// Constructors
Campaign::Campaign() {}

Campaign::Campaign(unsigned int _duration, unsigned int _currentDate) {
	this->duration = _duration;
	this->currentDate = _currentDate;
}

Campaign::~Campaign() {
	cout << "Object Destoryed!" << endl;
}

Campaign::Campaign(const Campaign& copyCampaign) {
	this->duration = copyCampaign.duration;
	this->currentDate = copyCampaign.currentDate;
}

// Methods
void Campaign::run(Election*) {}

void Campaign::runLocal(Election*, Event, string) {}

void Campaign::runNation(Election*, Event) {}