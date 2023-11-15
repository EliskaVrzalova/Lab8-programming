//name: eliska vrzalova
//login: c00301738
//date: 15/11/2023
//estimated time take: 25 min
//program title and description: Card suit and name: This program outputs card's suit and name based on randomly generated numbers that are returned to main from 2 other functions.
//any known bugs: no validation on user input
//Test 1 : Returned values are: 4 12, output should be: "The card is Queen Clubs"
//Test 2 : Returned values are: 1 7, output should be: "The card is 7 Hearts"
//Test 3 : Returned values are: 2 1, output should be: "The card is Ace Diamonds"

#include <iostream>
#include <string>
#include <cstdlib>

std::string getCardSuit();
std::string getCardFace();
int main()
{
	//variables
	std::string cardSuit = "";
	std::string cardName = "";

	//function calls
	cardSuit = getCardSuit();
	cardName = getCardFace();

	//answer
	std::cout << "The card is :" << cardName << " " << cardSuit << std::endl;

	system("Pause");
	return 0;
}

std::string getCardSuit()
//coverts generated number to a card suit string
{
	//variables
	int numberSuit = (rand() % 4) + 1; //generates random number between 1-4
	std::string cardSuit = "";

	if (numberSuit == 1)
	{
		cardSuit = "Hearts";
	}
	else if (numberSuit == 2)
	{
		cardSuit = "Diamonds";
	}
	else if (numberSuit == 3)
	{
		cardSuit = "Spades";
	}
	else
	{
		cardSuit = "Clubs";
	}
	return cardSuit;
}

std::string getCardFace()
//coverts generated number into card name
{
	int numberCard = (rand() % 13) + 1; //generates random number between 1-13
	std::string cardName = "";

	switch (numberCard)
	{
	case 1:
		cardName = "Ace";
		break;
	case 2:
		cardName = "2";
		break;
	case 3:
		cardName = "3";
		break;
	case 4:
		cardName = "4";
		break;
	case 5:
		cardName = "5";
		break;
	case 6:
		cardName = "6";
		break;
	case 7:
		cardName = "7";
		break;
	case 8:
		cardName = "8";
		break;
	case 9:
		cardName = "9";
		break;
	case 10:
		cardName = "10";
		break;
	case 11:
		cardName = "Jack";
		break;
	case 12:
		cardName = "Queen";
		break;
	case 13:
		cardName = "King";
		break;
	}
	return cardName;
}