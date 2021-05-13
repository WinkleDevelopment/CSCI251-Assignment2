/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/

#include "Human.h"
#include "Libraries.h"

class Candidate : public Human {
private:
	int voteCount;
public:
	int getVoteCount() { return voteCount; }

	void influenceElec(float);
	void updateVote(int);
};

