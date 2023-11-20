//name: eliska vrzalova
//login: c00301738
//date: 15/11/2023
//estimated time take: 25 min
//program title and descriprion: Cinema ticket price: This program calculates and outputs a price of a ticket based on the age entered.
//any known bugs: no error checking on letters and high numbers
//Test 1: user enters 2, output should be: "The price of the ticket is: 0"
//Test 2: user enters 5, output should be: "The price of the ticket is: 3"
//Test 3: user enters 12, output should be: "The price of the ticket is: 3"
//Test 4: user enters 13, output should be: "The price of the ticket is: 6"
//Test 5: user enters 54, output should be: "The price of the ticket is: 6"
//Test 5: user enters 55, output should be: "The price of the ticket is: 0"
//Test 6: user enters 64, output should be: "The price of the ticket is: 0"
//Test 7: user enters -1, output should be: "Error: the number entered cannot be less than 0."

#include <iostream>

float calculatePrice(int t_age);

int main7()
{
	//variables
	int age = 0;
	float price = 0.0f;

	//ask user for input
	std::cout << "Enter your age:" << std::endl;
	std::cin >> age;

	//error checking
	if (age < 0)
	{
		std::cout << "Error: number entered cannot be less than 0" << std::endl;
	}
	else
	{
		price = calculatePrice(age); //function call
		std::cout << "The price of your ticket is " << price << " euro." << std::endl;
	}
	system("Pause");
	return 0;
}

float calculatePrice(int t_age)
//this function calculates the price of the ticket based on the age of the user.
{
	//variables
	 float price = 0;
	 //age ranges
	const float FULL_PRICE = 6.0f;
	const int FREE_CHILD_AGE = 5;
	const int HALF_PRICE_AGE = 12;
	const int FULL_PRICE_AGE_BOTTOM = 13;
	const int FULL_PRICE_AGE_TOP = 54;
	const int FREE_ADULT_AGE = 55;

	if (t_age < FREE_CHILD_AGE) // age range: 4 and less
	{
		price = 0;
	}
	else if (t_age >= FREE_CHILD_AGE && t_age <= HALF_PRICE_AGE) // age range: 5-12
	{
		price = FULL_PRICE / 2;
	}
	else if (t_age >= FULL_PRICE_AGE_BOTTOM && t_age <= FULL_PRICE_AGE_TOP) //age range: 12-54
	{
		price = FULL_PRICE;
	}
	else if (t_age >= FREE_ADULT_AGE) //age range: 55 and older
	{
		price = 0;
	}
	return price;
}