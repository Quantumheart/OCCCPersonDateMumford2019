// Person.h


#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {

private:

	string firstName;
	string lastName;

public:

	Person(string firstName, string lastName);
	string getFirstName();
	string getLastName();
	void setFirstName(string firstName);
	void setLastName(string lastName);
	string toString();
	
};

#endif