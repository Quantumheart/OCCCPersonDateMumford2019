#include "OCCCDate.h"
#include <ctime>
#include <iomanip>
#pragma warning(disable : 4996)
OCCCDate::OCCCDate()
{
	int day, month, year;
	time_t tt;
	time(&tt);
	tm TM = *localtime(&tt);

	year = TM.tm_year + 1900;
	month = TM.tm_mon +1;
	day = TM.tm_mday;

	this->dayOfMonth = day;
	this->monthOfYear = month;
	this->year = year;
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
	int result = d2.year - d1.year;
	return result;
}

int OCCCDate::getDifference(OCCCDate d)
{
	
	time_t now = time(0);
	tm* ltm = localtime(&now);
	int result = d.year - ltm->tm_year+1900; 
	return result;
}

void OCCCDate::setDateFormat(bool df)
{
	this->dateFormat = df;
}

std::string OCCCDate::toString() 
{
	
	std::string toString;
	if (dateFormat) 
	{
		toString = std::to_string(monthOfYear) + '/' + std::to_string(dayOfMonth) + '/' + std::to_string(year);
		return toString;
	}
	else 
	{
		toString = std::to_string(dayOfMonth) + '/' + std::to_string(monthOfYear) + '/' + std::to_string(year);
		return toString;
	}
}