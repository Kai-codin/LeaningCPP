// LeaningCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

// Returns Course Info
int courseInfo()
{
    // Defualt Vars
    string Name = "Kai";
    string courseName = "Game Dev";
    string studentID = "B014852p";
    
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

int drawMenu()
{
    string functions[3] = {"drawBoat", "drawTriangle", "courseInfo"};
    
    std::cout << " ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱\n";
    std::cout << "| 1        Boat         |\n";
    std::cout << "| 2      Triangle       |\n";
    std::cout << "| 3     Course Info     |\n";
    std::cout << "¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n";
    
    string option;
    cout << "\nSelect an option: ";
    
    getline(cin, option);

    int optionInt = stoi(option);
    
    string functionToRun = functions[optionInt];
    
    std::cout << functionToRun << "\n";
    
    

    
    return 0;
}

int main()
{
    std::cout << "Welcome to Challenges\n\n";

    drawMenu();
    
    return 0;
}
