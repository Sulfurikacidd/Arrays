//
//  main.cpp
//  patterns_1
//
//  Created by Muhammad Talal on 2022-07-13.
//

#include <iostream>
using namespace std;

int main() {
    //write your code here..
    int count = 1;
    
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << count << "  ";
            ++count;
        }
        cout << endl;
    }
    
    
    return  0;
}
