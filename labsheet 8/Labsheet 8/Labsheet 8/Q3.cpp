//name: eliska vrzalova
//login: c00301738
//date: 13/11/2023
//estimated time take: 15 min
//program title and description: Time in seconds : this program converts entered number of seconds minutes and hours to seconds and outputs total time in seconds.
//any known bugs: no validation on user input
//Test 1: user enters : 60 5 1, output should be : 3960
//Test 2 : user enters : 120 12 3, output should be : 11 640
//Test 3 : user enters : 120 0 3, output should be : "Error: the number entered cannot be less than 0"
//Test 3 : user enters : 120 12 0, output should be : "Error: the number entered cannot be less than 0"
//Test 3 : user enters : 0 12 3, output should be : "Error: the number entered cannot be less than 0"

#include <iostream>

int totalSecs(int t_seconds, int t_minutes, int t_hours); //function declaration
int main3()
{
	//variables in main
	int seconds = 0;
	int minutes = 0;
	int hours = 0;
	int totalSeconds = 0;

	//ask user for input
	std::cout << "Enter the amount of seconds:" << std::endl;
	std::cin >> seconds;
	std::cout << "Enter the amount of minutes:" << std::endl;
	std::cin >> minutes;
	std::cout << "Enter the amount of hours" << std::endl;
	std::cin >> hours;

	//error checking
	if (seconds < 0 || minutes < 0 || hours < 0)
	{
		std::cout << "Error: the number entered cannot be less than 0." << std::endl;
	}
	else
	{
		totalSeconds = totalSecs(seconds, minutes, hours); //function call
		std::cout << "Total time in seconds:" << totalSeconds << std::endl;
	}
	system("Pause");
	return 0;
	
}

int totalSecs(int t_seconds, int t_minutes, int t_hours) //function definition
{
	//variables in function totalSecs()
	int totalSeconds = 0;
	const int SECONDS = 60; //60 secs in 1 minute, 2*60 secs in 1 hour

	//calculation
	totalSeconds = t_seconds + (t_minutes * SECONDS) + (t_hours * SECONDS * SECONDS); //calculates the total time in seconds

	return totalSeconds; //returning value

}