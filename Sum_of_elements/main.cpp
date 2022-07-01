//
//  main.cpp
//  Sum_of_elements
//
//  Created by Muhammad Talal on 2022-06-29.
//
// This program lets you enter an array and calculate the sum of that array

#include <iostream>
using namespace std;

int main() {
    //write your program here ..
    
    //Declare variables
    int n; //array size;
    int sum = 0;
    
    //Ask for an array size
    cout << "How big do you want your array to be: ";
    
    // Read n
    cin >> n;
    
    //declare array with n size
    int array[n]; //declare array.

    //Ask for array elements.
    cout << "Enter " << n << " numbers with spaces in between: ";
    
    //Read the elements into array.
    for(int i=0; i < n; ++i) {
        cin >> array[i];
    }
    
    //Add all the elements of the array and store the resuly in sum
    for(int i=0; i < n; ++i) {
        sum = sum + array[i];
    }
    
    //print sum value
    cout << "sum of all the elements in the array is: " << sum << endl;
    
    
    return 0;
}
