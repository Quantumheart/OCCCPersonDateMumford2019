#include <iostream>
#include <ctime>
#include "OCCCDate.h"
#include "Person.h"
using namespace std;

int main()
{
	string answer; 
	cout << "Would you like to create a new person? Enter yes to create a person. \n";
	getline(cin, answer);
	do  
	{
		string fName,lName;
		cout << "Enter the your first name:"; 
		getline(cin, fName);
		cout << "Enter the your last name:";
		getline(cin, lName);
		Person p (fName, lName);
		OCCCDate * dob = new OCCCDate();
		cout << "Was this person born yesterday? i.e. : " << dob->toString() << "\n";
		cout << "Cool, nice to meet " << p.getFirstName() << " " << p.getLastName();
		
		cout << "Change your first name!: ";
		getline(cin, fName);
		cout << "Change your last name:";
		getline(cin, lName);
		p.setFirstName(fName);
		p.setLastName(lName);
		cout << "Cool, nice to meet : " << p.getFirstName() << " " << p.getLastName();
		cout << "type yes to continue";
		getline(cin, answer);
	} while (answer == "yes");
}
