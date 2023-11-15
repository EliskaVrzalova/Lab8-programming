//name: eliska vrzalova
//login: c00301738
//date: 13/11/2023
//estimated time take: 15 min
//program title and description: Divisibility : this program outputs whether is the first entered number exactly divisible by the second entered number or not.
//any known bugs : no validation on user input
//Test 1: User enters: 6 2, output should be: "Number 6 is exactly divisible by number 2."
//Test 2: User enters: 6 4, output should be: "Number 6 is not exactly divisible by number 4."
//Test 3: User enters: 6 -1, output should be: "Error: the number entered cannot be less than 0"

#include <iostream>

bool isDivisible(int t_num1, int t_num2);
int main5()
{
	//variables
	int num1 = 0;
	int num2 = 0;
	bool result = false;

	//ask user for input
	std::cout << "Enter the first number:" << std::endl;
	std::cin >> num1;
	std::cout << "Enter the second number:" << std::endl;
	std::cin >> num2;

	//error check
	if (num1 < 0 || num2 < 0)
	{
		std::cout << "Error: the number entered cannot be less than 0." << std::endl;
	}
	else
	{
		result = isDivisible(num1, num2); //function call
	}

	//answer
	if (result == false)
	{
		std::cout << "Number" << num1 << " is not exactly divisible by number" << num2 << std::endl;
	}
	else // result == true
	{
		std::cout << "Number" << num1 << " is exactly divisible by number" << num2 << std::endl;
	}


	system("Pause");
	return 0;

} //end main

bool isDivisible(int t_num1, int t_num2)
{
	//variables
	bool result = false;

	if (t_num1 % t_num2 == 0)
	{
		result = true;
	}
	else
	{
		result = false;
	}
	return result;
}

