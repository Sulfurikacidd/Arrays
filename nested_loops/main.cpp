//
//  main.cpp
//  nested_loops
//
//  Created by Muhammad Talal on 2022-07-12.
//
//  This program shows how a Nested for loop prints a table/matrix. For better understanding, put a breakpoint at the start of the first loop and step over 1 step at a time.

#include <iostream>
using namespace std;

int main() {
    //write your code here..
    for(int i=1; i<=5; ++i) { //The outer loop prints the row i.e whatever is inside inner loop print it 5 times.
        
        for(int j=1; j<=5; ++j) { //The inner loop prints colums i.e 1 2 3 4 5
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl; //after everyrow is printed this line of code moves the cursor to the the next line.
    }
    
    
    return 0;
}
