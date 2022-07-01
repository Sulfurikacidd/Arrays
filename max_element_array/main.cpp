//
//  main.cpp
//  max_element_array
//
//  Created by Muhammad Talal on 2022-06-29.
//
// This program finds you the max element in an array

#include <iostream>
using namespace std;

int main() {
    //write your program here..
    
    //Declare the variables needed
    int n; //size of array
    int max; //max element
    
    ///Lets get an array first.
    
    //Ask for the size of an Array
    cout << "Enter the size of the array: ";
    //store the size in n
    cin >> n;
    
    //declare array with size n
    int arr[n];
    
    //Ask for the array elements
    cout << "Enter " << n << " numbers with spaces in between: ";
    //Read elements into array
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    //set max to the first element in the array
    max = arr[0];
    
    //Find the max element in the array
    for (int i = 1; i < n; ++i) { // start i = 1, because comparing i = 0 with arr[0] is of no point
        if (arr[i] > max) { //check for the max element
            max = arr[i]; //store the max element in the var max
        }
    }
    
    //print the max
    cout << "max: " << max << endl;
    
    return 0;
}
