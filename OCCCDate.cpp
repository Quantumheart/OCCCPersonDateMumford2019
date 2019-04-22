#include "OCCCDate.h"


OCCCDate::OCCCDate()
{

}


OCCCDate::OCCCDate(int day, int month, int year)
{
	this->dayOfMonth = day;
	this->monthOfYear = month;
	this->year = year;
}


int OCCCDate::getDayofMonth() 
{
	return dayOfMonth;
}

int OCCCDate::getMonth()
{
	return monthOfYear;
}

int OCCCDate::getYear()
{
	return year;
}

// returns the name of the month corresponding to the integer
std::string OCCCDate::getNameOfMonth(int id)
{
	std::string Month;

	switch (id)
	{
	case 1: Month = "January";
		break;

	case 2: Month = "February";
		break;

	case 3: Month = "March";
		break;

	case 4: Month = "April";
		break;

	case 5: Month = "May";
		break;

	case 6: Month = "June";
		break;

	case 7: Month = "July";
		break;

	case 8: Month = "August";
		break;

	case 9: Month = "September";
		break;

	case 10: Month = "October";
		break;

	case 11: Month = "November";
		break;

	case 12: Month = "December";
		break;
	}
	return Month;
}

int OCCCDate::getDifference(OCCCDate d1, OCCCDate d2)
{

}

int OCCCDate::getDifference(OCCCDate d)
{
}

void OCCCDate::setDateFormat(bool df)
{
}

bool OCCCDate::equals(OCCCDate d)
{
}

std::string OCCCDate::toString() 
{
	// needs to return a 
	std::string toString = "";
	return toString;
}