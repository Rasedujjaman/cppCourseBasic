/*Create a structure of type date that contains three members: the month, the day of the month, and the year, all of type int. (Or use day-month-year order if you prefer.) Have the user enter a date in the format 12/31/2001, store it in a variable of type struct date, then retrieve the values from the variable and print them out in the same format.*/


#include <iostream>


struct Date
{
	int day;
	int month;
	int year;
};


int main()
{
	Date date;
	char slash_dummy;	
	std::cout << "Give the date (mm/dd/yyyy): ";
	std::cin >> date.month >> slash_dummy  >> date.day >> slash_dummy
		>> date.year;
	

	std::cout << "The date is ";
	std::cout << date.month << "/"<< date.day << "/" << date.year 
		  << std::endl;

	return 0;

}


