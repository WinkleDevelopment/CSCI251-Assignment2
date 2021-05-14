/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/

#include "Issue.h"

// Constructors
Issue::Issue() {}

Issue::Issue(string _code, IssueType _type, string _statement) {
	this->code = _code;
	this->type = _type;
	this->statement = _statement;
}

Issue::~Issue() {
	cout << "Object Destoryed!" << endl;
}

Issue::Issue(const Issue& copyIssue) {
	this->code = copyIssue.code;
	this->type = copyIssue.type;
	this->statement = copyIssue.statement;
}

// Methods

