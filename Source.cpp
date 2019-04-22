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
		cout << "\n Change the date format!\n";
		dob->setDateFormat(false);
		cout << "the person was born in: " << dob->getNameOfMonth(dob->getDayofMonth());
		int dd, mm, yyyy;
		cout << dob->toString() << "\n";
		cout << "enter a new date of birth! dd/mm/yyyy: ";
		cout << "dd: ";
		cin >> dd;
		cin.ignore();
		cout << "mm: ";
		cin >> mm;
		cin.ignore();
		cout << "yyyy ";
		cin >> yyyy;
		cin.ignore();
		OCCCDate dob1(dd, mm, yyyy);
		OCCCDate dob2();
		cout << "he was born in: " << dob1.getNameOfMonth(mm);
		cout << "he's been alive: " << dob1.getDifference(dob1);
		cout << "The difference between the two dates is: " << dob1.getDifference(dob1, dob2);
		cout << "\nChange your first name!: ";
		getline(cin, fName);
		cout << "Change your last name:";
		getline(cin, lName);
		p.setFirstName(fName);
		p.setLastName(lName);
		cout << "\nCool, nice to meet : " << p.getFirstName() << " " << p.getLastName();
		cout << "\ntype yes to continue";
		getline(cin, answer);
	} while (answer == "yes");
}
