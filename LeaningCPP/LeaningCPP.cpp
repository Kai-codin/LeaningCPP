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

int gradeCalculator()
{
    string grade;
    cout << "\nStudents grade: ";
    
    getline(cin, grade);
    
    int intGrade = stoi(grade);
    
    if (intGrade > 99) {
        std::cout << "Hello Harvard";
    }
    else if (intGrade > 80) {
        std::cout << "Merit";
    }
    else if (intGrade > 40)
    {
        std::cout << "Pass";
    }
    else if (intGrade > 20)
    {
        std::cout << "Fail";
    } else
    {
        std::cout << "Why are you even here";
    }
    
    gradeCalculator();
    return 0;
}

int isBob()
{
    string name;
    cout << "\nYour name: ";
    
    getline(cin, name);
    
    if (name == "Bob")
    {
        std::cout << "Hello Bob\n";
    }
    else
    {
        std::cout << "Your not bob\n";
    }
    
    return 0;
}

int drawMenu()
{
    std::cout << " ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱ ̱\n";
    std::cout << "| 1        Boat         |\n";
    std::cout << "| 2      Triangle       |\n";
    std::cout << "| 3     Course Info     |\n";
    std::cout << "| 4       Grade         |\n";
    std::cout << "| 5        Bob?         |\n";
    std::cout << "¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n";
    
    string option;
    cout << "\nSelect an option: ";
    
    getline(cin, option);

    int optionInt = stoi(option);

    if (optionInt == 1) {
        drawBoat();
    } else if (optionInt == 2) {
        drawTriangle();
    } else if (optionInt == 3) {
        courseInfo();
    } else if (optionInt == 4) {
        gradeCalculator();
    } else if (optionInt == 5) {
        isBob();
    } else {
        std::cout << "Invalid Option\n";
        drawMenu();
    }
    
    return 0;
}

int main()
{
    std::cout << "Welcome to Challenges\n\n";

    drawMenu();
    
    return 0;
}
