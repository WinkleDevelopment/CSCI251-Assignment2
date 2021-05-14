/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/

#include "Event.h"

// Constructors
Event::Event() {}

Event::Event(string _content, EventType _type, vector<Characteristic> _impactChar, vector<bool> _impactRange, IssueType _relatedIssue) {
	this->content = _content;
	this->type = _type;
	this->impactChar = _impactChar;
	this->impactRange = _impactRange;
	this->relatedIssue = _relatedIssue;
}

Event::~Event() {
	cout << "Object Destoryed!" << endl;
}

Event::Event(const Event& copyEvent) {
	this->content = copyEvent.content;
	this->type = copyEvent.type;
	this->impactChar = copyEvent.impactChar;
	this->impactRange = copyEvent.impactRange;
	this->relatedIssue = copyEvent.relatedIssue;
}

// Methods
