//name: eliska vrzalova
//login: c00301738
//date: 22/11/2023
//estimated time take: 20 min
//program title and description: Final student result: This program calculates final result of a student after his assessment mark and final exam mark are entered.
//any known bugs: no error checking on letters
//Test 1: user enters: 60 80, output should be: "Your final result: 74%"
//Test 2: user enters: 75 30, output should be: "Your final result: 43.5%"
//Test 3: user enters: 75 -1, output should be: "Error: exam mark and final mark need to have value 0 - 100."
//Test 4: user enters: 0 30, output should be: "Your final result: 21%"

#include <iostream>
#include <string>

float calFinalResult(float t_assessmentMark, float t_finalMark);

int main10()
{
	//variables
	std::string studentNum = "";
	float assessmentMark = 0.0f;
	float finalMark = 0.0f;
	float studentResult = 0.0f;

	//ask user for input
	std::cout << "Enter your student number:" << std::endl;
	std::cin >> studentNum;
	std::cout << "Enter your assessment mark:" << std::endl;
	std::cin >> assessmentMark;
	std::cout << "Enter your final exam mark:" << std::endl;
	std::cin >> finalMark;

	//error checking
	if (assessmentMark >= 0 && assessmentMark <= 100 && finalMark >= 0 && finalMark <= 100)
	{
		studentResult = calFinalResult(assessmentMark, finalMark);
		std::cout << "Your student number:" << studentNum << std::endl;
		std::cout << "Your final result is:" << studentResult << " %" << std::endl;
	}
	else
	{
		std::cout << "Error: marks need to hace value 0-100." << std::endl;
	}
	system("Pause");
	return 0;
}


float calFinalResult(float t_assessmentMark, float t_finalMark)
//this function calculates the final result of the student in %
// The final result consists of 30% assessment mark and 70% final exam mark
{
	//variables
	float studentResult = 0.0f;
	const float ASSESSMENT_WEIGHT = 0.3f;
	const float FINAL_EXAM_WEIGHT = 0.7f;

	//calculation
	t_assessmentMark = t_assessmentMark * ASSESSMENT_WEIGHT;
	t_finalMark = t_finalMark * FINAL_EXAM_WEIGHT;
	studentResult = t_assessmentMark + t_finalMark; //calculates the final result of a student

	return studentResult;
}