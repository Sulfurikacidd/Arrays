//
//  main.cpp
//  patterns_3
//
//  Created by Muhammad Talal on 2022-07-14.
//

#include <iostream>
using namespace std;

int main() {
    //write your code here..
    const int n = 5;
    
    //cross diagnol triangle
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i+j >= n-1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    
    
    return  0;
}
