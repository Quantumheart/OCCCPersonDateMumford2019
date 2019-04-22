// Person.cpp

#include <string>
#include "Person.h"
using namespace std;

Person::Person(string firstName, string lastName) {
	this->firstName = firstName;
	this->lastName = lastName;
}

void Person::setFirstName(string firstName) {
	this->firstName = firstName;
}

void Person::setLastName(string lastName) {
	this->lastName = lastName;
}

string Person::getFirstName() {
	return firstName;
}

string Person::getLastName() {
	return lastName;
}

string Person::toString() {
	return lastName + ", " + firstName;
}
