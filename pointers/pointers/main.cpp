//
//  main.cpp
//  pointers
//
//  Created by Kai on 23/10/2025.
//

#include <iostream>
using namespace std;

void TestFunc(int* someint)
{
    *someint = 10;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int someValue = 5;
    
    int* p = &someValue;
    
    cout << "Some value = " << someValue << endl;
    cout << "Some Value = " << p << endl;
    cout << "Some Value = " << *p << endl;
    
    return 0;
}
