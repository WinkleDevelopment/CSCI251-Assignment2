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
#include "Libraries.h"

class ElectionGenerator {
private:
	vector<Event> elecEvent;
	vector<Issue> issues;
	vector<float> partiesStanceRanges;
public:
	ElectionGenerator();
	ElectionGenerator(vector<Event>, vector<Issue>, vector<float>);
};

