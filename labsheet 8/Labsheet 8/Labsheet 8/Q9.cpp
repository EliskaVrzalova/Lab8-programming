//name: eliska vrzalova
//login: c00301738
//date: 20/11/2023
//estimated time take: 20 min
//program title and description: This program takes the amount of seconds and outputs the time in hours, minutes and seconds.
//any known bugs: no error checking on letters
//Test 1: user enters 3662, output should be: " 1 hour 1 minute(s) and 2 second(s)."
//Test 2: user enters 5463, output should be: " 1 hour 31 minute(s) and 3 second(s)."
//Test 3: user enters -1, output should be: "Error: number ebtered cannot be less than 0."

#include <iostream>

void secsToHMS(int t_seconds);

int main()
{
	//variables
	int seconds = 0;

	//ask user for input
	std::cout << "Emter the amount of seconds:" << std::endl;
	std::cin >> seconds;

	//error checking
	if (seconds < 0)
	{
		std::cout << "Error: the number entered cannot be less than 0." << std::endl;
	}
	else
	{
		secsToHMS(seconds); //function call
	}
	system("Pause");
	return 0;
}

void secsToHMS(int t_seconds)
//converts the total amout of seconsds into hours, minutes and seconds
{
	int seconds = 0;
	int minutes = 0;
	int hours = 0;
	const int SECS_IN_MIN = 60;
	const int SECS_IN_HOUR = 3600;

	//calculation
	minutes = t_seconds % SECS_IN_MIN; //amount of minutes
	t_seconds = t_seconds - (minutes * SECS_IN_MIN);
	hours = t_seconds % SECS_IN_HOUR; //amount of hours
	t_seconds = t_seconds - (hours * SECS_IN_HOUR); 
	seconds = t_seconds; //amount of seconds

	//answer
	std::cout <<"The time is:" << hours << "hours" << minutes << "minutes" << seconds << "seconds." << std::endl;
}