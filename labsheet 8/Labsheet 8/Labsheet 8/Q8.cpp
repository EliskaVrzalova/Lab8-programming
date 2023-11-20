//name: eliska vrzalova
//login: c00301738
//date: 20/11/2023
//estimated time take: 20 min
//program title and description: Area and perimeter of rectangle: this program calculates and outputs the area and perimeter of rectangle in meters.
//any known bugs: no error checking on letters
//Test 1: user enters 2 5, output should be: "The area is 10 meters." and "The perimeter is 14 meters."
//Test 2: user enters 4 8, output should be: "The area is 32 meters." and "The perimeter is 24 meters."
//Test 3: user enters -1 8, output should be : "Error: the number entered cannot be less than or equal to 0."
//Test 4: user enters 0 8, output should be : "Error: the number entered cannot be less than or equal to 0."

#include <iostream>

float calAreaRectangle(float t_lenght, float t_width);
float calPerimeterRectangle(float t_lenght, float t_width);
int main8()
{
	//variables
	float lenght = 0.0f;
	float width = 0.0f;
	float area = 0.0f;
	float perimeter = 0.0f;

	//ask user for input
	std::cout << "Enter the lenght in meters:" << std::endl;
	std::cin >> lenght;
	std::cout << "Enter the width in meters:" << std::endl;
	std::cin >> width;

	//error checking
	if (lenght <= 0 || width <= 0)
	{
		std::cout << "Error: the number entered cannot be less than or equal to 0." << std::endl;
	}
	else
	{
		area = calAreaRectangle(lenght, width); //function call
		std::cout << "The are of the rectangle is" << area << " meters." << std::endl; //answer
		perimeter = calPerimeterRectangle(lenght, width); //function call
		std::cout << "The perimeter of rectangle is" << perimeter << " meters." << std::endl; //answer
	}
	
	
	system("Pause");
	return 0;
}

float calAreaRectangle(float t_lenght, float t_width)
//calculates and returns the value of the area of the rectangle
{
	//variables
	float area = 0.0f;

	//calculation
	area = t_lenght * t_width;

	return area;
}

float calPerimeterRectangle(float t_lenght, float t_width)
//calculates and returns the value of the perimeter of the rectangle
{
	//variables
	float perimeter = 0.0f;

	//calculation
	perimeter = (t_lenght + t_width) * 2;

	return perimeter;
}
