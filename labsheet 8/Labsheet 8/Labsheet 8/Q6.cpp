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
}