// LeaningCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

// Defualt Vars
string Name = "Kai";
string courseName = "Game Dev";
string studentID = "B014852p";

// Returns Course Info
int courseInfo()
{
	std::cout << "Name: " + Name + "\nCourse: " + courseName + "\nStudentID: " + studentID + "\n";
	return 0;
}

// Returns Triangle
int drawTriangle()
{
	std::cout << "\n*\n";
	std::cout << "**\n";
	std::cout << "* *\n";
	std::cout << "****\n";
	return 0;
}

// Returns Boat
int drawBoat()
{
	std::cout << "\n    *\n";
	std::cout << "    **\n";
	std::cout << "    * *\n";
	std::cout << "    ****\n";
	std::cout << "     |\n";
	std::cout << "************\n";
	std::cout << " *        *\n";
	std::cout << "  ********\n";
	return 0;
}


int main()
{
    std::cout << "Welcome to Challenges\n\n";

	std::cout << "2 + 2" << " = " << "4\n\n";

	courseInfo();

	drawTriangle();

	drawBoat();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
