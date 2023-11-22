//name: eliska vrzalova
//login: c00301738
//date: 22/11/2023
//estimated time take: 20 min
//program title and description: Taxi fare cost: This program calculates the cost of a taxi fare after number of passangers and kms are entered.
//any known bugs: no validation on user input
//test 1: user enters: 10 3, output should be: "The total cost of 3 people travelling 10 kms: 33 euro
//test 2: user enters: 3 3, output should be: "The total cost of 3 people travelling 3 kms: 12 euro
//test 3: user enters: 15 4, output should be: "The total cost of 4 people travelling 15 kms: 64 euro

#include <iostream>

float calCost(int t_passangers, float t_journey);

int main()
{
	//variables
	int passangers = 0;
	float journey = 0.0f;
	float totalPrice = 0.0f;

	//ask user for input
	std::cout << "Enter the number of passangers:" << std::endl;
	std::cin >> passangers;
	std::cout << "Enter the lenght of journey in kms:" << std::endl;
	std::cin >> journey;

	//function call
	totalPrice = calCost(passangers, journey);

	std::cout << "The total cost of" << passangers << " people travelling" << journey << " kms:" << totalPrice << " euro" << std::endl;

	system("Pause");
	return 0;

}

float calCost(int t_passangers, float t_journey)
//this function calculates the total price of the taxi ride
// min charge is 4 euro/person
{
	//variables
	float totalPrice = 0.0f;
	int const MIN_CHARGE = 4;
	int const NO_CHARGE_JOURNEY = 3;

	//calculations
	if (t_journey <= NO_CHARGE_JOURNEY)
	{
		totalPrice = t_passangers * MIN_CHARGE; //calculates the price if the travlleling distance did not exceed 3 km
	}
	else
	{
		totalPrice = (t_passangers * MIN_CHARGE) + (t_passangers * (t_journey - NO_CHARGE_JOURNEY)); //calculates the price if travelling distance exceeded 3 km
	}
	return totalPrice;
}