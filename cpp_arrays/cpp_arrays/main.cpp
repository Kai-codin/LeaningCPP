//
//  main.cpp
//  cpp_arrays
//
//  Created by Kai on 20/10/2025.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string numbers[3] = {"-5", "-10", "-15"};
    
    int n = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < n; i++) {
        std::cout << numbers[i] << "\n";
    }
        
    string players[2][4] = {
        {"player1", "player2", "player3", "player4"},
        {"100", "80", "60", "40"}
    };
    
    int l = sizeof(players[1]) / sizeof(players[0][1]);
    
    for (int i = 0; i < l; i++) {
        cout << "name: " << players[0][i] << " age: " << players[1][i] << "\n";
    }
    
    return 0;
}
