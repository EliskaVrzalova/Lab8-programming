//name: eliska vrzalova
//login: c00301738
//date: 13/11/2023
//estimated time take: 15 min
//program title and description: Centimeters to inches conversion - This program converts entered lenght in cm to its inch equivalent.
//any known bugs: No validation on user input
//Test 1: user enters : 100, output should be : "39.4"
//Test 2 : user enters : 250, output should be : "98.5"
//Test 3 : user enters : -1, output should be : "Error: the number entered cannot be less than 0"

#include <iostream>

float inchEquivalent(float t_centimeters); //function declaration
int main2()
{
	//variables in main
	float centimeters = 0.0f;
	float inches = 0.0f;

	//ask user for input
	std::cout << "Enter the lenght in centimeters:" << std::endl;
	std::cin >> centimeters;

	//error checking
	if (centimeters < 0)
	{
		std::cout << "Error: the number entered cannot be less than 0" << std::endl;
	}
	else
	{
		 inches = inchEquivalent(centimeters); //function call
	}
	std::cout << "The lenght in inches is:" << inches << std::endl; //answer

	system("pause");
	return 0;
}

float inchEquivalent(float t_centimeters) //function definition
{
	//variables in function inchEquivalent()
	const float CONVERSION = 0.394f;
	float inches = 0;

	//calculation
	inches = t_centimeters * CONVERSION; //converts centimeters to inches

	return inches;
}