// LeaningCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
bool exit_app = false;

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
    cout << "\nType 'back' to go back";
    cout << "\nStudents grade: ";
    
    getline(cin, grade);
    
    if (grade == "back") {
        return 0;
    }
    else
    {
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
    }
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

int dynamicTriangle() {
    string height;
    string width;
    
    std::cout << "Height: \n";
    getline(cin, height);
    
    int heightINT = stoi(height);
    int currentWidth = 0;
    
    // for every height we go accross we need to add 1 extra * per line
    
    for (int i = 0; i < heightINT; i++) {
        currentWidth++;
        
        for (int i = 0; i < currentWidth; i++) {
            std::cout << "*";
        }
        
        std::cout << "\n";
    }
    
    return 0;
}

int charactorSelector() {
    string charators[5] = {"Char1","Char2","Char3","Char4","Char5"};
    
    int i = 0;
    
    for (string charator : charators) {
        i++;
        std::cout << i << ": " << charator << "\n";
    }
    
    string name;
    std::cout << "\nCharactor Select: ";
    
    getline(cin, name);
    
    if (name == "back") {
        return 0;
    }
    
    int nameInt = stoi(name);
    
    string choice = " good";
    
    if (nameInt % 2 == 0) {
        choice = ". Good choice";
    } else {
        choice = ". you picked an ass class bad choice";
    }
    
    std::cout << "\nYou selected " << charators[nameInt - 1] << choice << "\n\n";
    
    charactorSelector();
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
    std::cout << "| 6  Charictor Selector |\n";
    std::cout << "| 7   Dynamic Triangle  |\n";
    std::cout << "| X        Exit         |\n";
    std::cout << "¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n";
    
    string option;
    cout << "\nSelect an option: ";
    
    getline(cin, option);
    
    if (option == "x" || option == "X") {
        exit_app = true;
        return 0;
    } else {
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
        } else if (optionInt == 6) {
            charactorSelector();
        } else if (optionInt == 7) {
            dynamicTriangle();
        } else {
            std::cout << "Invalid Option\n";
            drawMenu();
        }
    }
    return 0;
}

int main()
{
    std::cout << "Welcome to Challenges\n\n";

    while (exit_app != true){
        drawMenu();
    }
    return 0;
}
