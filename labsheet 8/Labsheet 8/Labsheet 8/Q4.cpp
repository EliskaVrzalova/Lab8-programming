//name: eliska vrzalova
//login: c00301738
//date: 13/11/2023
//estimated time take: 15 min
//program title and description : Exam grade result : this programs takes entered exam grade and outputs whether student failed, passed, had a merit or distinction.
//any known bugs: no validation on user input
//Test 1: User inputs 2, output should be: "Student has failed."
//Test 2: User inputs 40, output should be: "Student has passed."
//Test 3: User inputs 47, output should be: "Student has passed."
//Test 4: User inputs 55, output should be: "Student has a merit."
//Test 5: User inputs 60, output should be: "Student has a merit."
//Test 6: User inputs 70, output should be: "Student has distinction."
//Test 7: User inputs 90, output should be: "Student has passed with distinction."
//Test 8: User inputs 100, output should be: "Student has passed with distinction."
//Test 9: User inputs 115, output should be: "Error - the number is outside the range 0-100".
//Test 10: User inputs -1, output should be : "Error - the number is outside the range 0-100".

#include <iostream>
#include <string>

std::string getExamGrade(int t_gradeNum);
int main4()
{
	//variables
	std::string examGrade = "";
	int gradeNum = 0;

	//ask user for input
	std::cout << "Enter your exam grade:" << std::endl;
	std::cin >> gradeNum;

	//error checking
	if (gradeNum < 0 || gradeNum>100)
	{
		std::cout << "Error: the number is outside the range 0-100." << std::endl;
	}
	else
	{
		examGrade = getExamGrade(gradeNum);
		std::cout << "" << examGrade << std::endl;
	}
	system("Pause");
	return 0;
} //end main

std::string getExamGrade(int t_gradeNum)
{
	//variables
	std::string examGrade = "";
	const int FAIL = 40;
	const int PASS = 55;
	const int MERIT = 70;
	const int DISTINCTION = 100;

	//grade checking
	if (t_gradeNum >= 0 && t_gradeNum < FAIL) //range of fail 0-39
	{
		examGrade = "Student has failed.";
	}
	else if (t_gradeNum >= FAIL && t_gradeNum < PASS) //range of pass: 40-54
	{
		examGrade = "Student has passed.";
	}
	else if (t_gradeNum >= PASS && t_gradeNum < MERIT) //range of merit: 55-69
	{
		examGrade = "Student has a merit.";
	}
	else if (t_gradeNum >= MERIT && t_gradeNum <= DISTINCTION) //range of distinction: 70-100
	{
		examGrade = "Student has passed with distinction.";
	}

	return examGrade;
}