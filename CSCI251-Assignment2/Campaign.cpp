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

Campaign::Campaign(unsigned int, unsigned int) {}

Campaign::~Campaign() {}

Campaign::Campaign(const Campaign& copyCampaign) {}

// Methods
void Campaign::run(Election*) {}

void Campaign::runLocal(Election*, Event, string) {}

void Campaign::runNation(Election*, Event) {}