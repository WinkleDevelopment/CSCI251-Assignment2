/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/

#include "Libraries.h"
#include "Event.h"
#include "ElectionGenerator.h"
#include "RandomEng.h"
#include "Election.h"

class Campaign {
private:
	unsigned int duration;
	unsigned int currentDate;
public:


	unsigned int getDuration() { return duration; }
	unsigned int getcurrentDate() { return currentDate; }

	void run(Election);
	void runLocal(Election, Event, string);
	void runNation(Election, Event);
};

