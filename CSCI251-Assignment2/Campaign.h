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
#include "ElectionGenerator.h"
#include "RandomEng.h"
#include "Election.h"

class Campaign {
private:
	unsigned int duration;
	unsigned int currentDate;
public:
	Campaign();
	Campaign(unsigned int, unsigned int);
	~Campaign();
	Campaign(const Campaign& copyCampaign);

	unsigned int getDuration() { return duration; }
	unsigned int getcurrentDate() { return currentDate; }

	void run(Election);
	void runLocal(Election, Event, string);
	void runNation(Election, Event);
};

