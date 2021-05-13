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

enum class IssueType {
	ECONOMIC,
	EDUCATION,
	EMPLOYMENT,
	ENVIRONMENT,
	HEALTHCARE
};

class Issue {
private:
	string code;
	IssueType type;
	string statement;
public:
	Issue();
	Issue(string, IssueType, string);
	~Issue();
	Issue(const Issue& copyIssue);

	string getCode() { return code; }
	IssueType getIssueType() { return type; }
	string getStatement() { return statement; }

};

