//
//  Functions.cpp
//  LeaningCPP
//
//  Created by Kai on 15/10/2025.
//
#include <iostream>


int Sqare(int number);

int Sqare(int number)
{
    int sqareNumber = number * number;
    
    std::cout << sqareNumber;
    
    return sqareNumber;
}

int main()
{
    Sqare(4);
}


