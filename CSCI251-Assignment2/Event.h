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
#include "Human.h"
#include "Issue.h"
#include "Libraries.h"

enum class EventType {
	DEBATE,
	CANDIDATE_RELATION,
	LEADER_RELATED,
	ISSUE_RELATED
};

class Event {
private:
	string content;
	EventType type;
	vector<Characteristic> impactChar;
	vector<bool> impactRange;
	IssueType relatedIssue;
public:
	Event();
	Event(string, EventType, vector<Characteristic>, vector<bool>, IssueType);
	~Event();
	Event(const Event& copyEvent);

	string getContent() { return content; }
	EventType getType() { return type; }
	vector<Characteristic> getImpactChar() { return impactChar; }
	vector<bool> getImpactRange() { return impactRange; }
	IssueType getRelatedIssue() { return relatedIssue; }
};

