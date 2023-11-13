//name: eliska vrzalova
//login: c00301738
//date: 13/11/2023
//estimated time take: 15 min
//program title end description: This program ask for a number a month and outputs the month name after using switch statement.
//any known bugs: No validation on user input
//Test 1: user enters : 2, output should be : "February"
//Test 2 : user enters : 11, output should be : "November"
//Test 1 : user enters : 15, output should be : "Error: the number entered is outside the range 1-12."

#include <iostream>
#include <string>

int main1()
{
	//variables
	int monthNum = 0;
	std::string monthName = "";

	//ask user for input
	std::cout << "Enter a number of a month:" << std::endl;
	std::cin >> monthNum;

	//switch statement
	switch (monthNum)
	{
	case 1:
		monthName = "January";
		break;
	case 2:
		monthName = "February";
		break;
	case 3:
		monthName = "March";
		break;
	case 4:
		monthName = "April";
		break;
	case 5:
		monthName = "May";
		break;
	case 6:
		monthName = "June";
		break;
	case 7:
		monthName = "July";
		break;
	case 8:
		monthName = "August";
		break;
	case 9:
		monthName = "September";
		break;
	case 10:
		monthName = "October";
		break;
	case 11:
		monthName = "November";
		break;
	case 12:
		monthName = "December";
		break;
	default:
		monthName = "Error: the number entered is outside the range 1-12."; //error checking
		break;
	}
	std::cout << "The month is:" << monthName << std::endl; //output, answer


	system("Pause");
	return 0;
}