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

enum IssueType {
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
};

