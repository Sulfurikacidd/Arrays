//
//  main.cpp
//  patterns_2
//
//  Created by Muhammad Talal on 2022-07-13.
//

#include <iostream>
using namespace std;

int main() {
    //write your code here ..
    
    //upper-right-side triangle.
    for(int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (i >= j) { //when i is greater or equal to j print
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    cout << endl;
    
    //lower-right-side triangle.
    for(int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (i <= j) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    
    return 0;
}
