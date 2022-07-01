//
//  main.cpp
//  linear_search
//
//  Created by Muhammad Talal on 2022-06-30.
//
// This program shows how to perform a linear search on an array and find the index/position of key (user input) element.

#include <iostream>
using namespace std;

int main() {
    //write your code here..
    
    //Declare program variables and array.
    const int n = 5; //size of array. it's a constant
    int arr[n] = {2,4,6,8,10};
    int key;
    
    //Ask for the key (element we're trying to find the position of).
    cout << "Enter key: ";
    
    //Read key into the declared var.
    cin >> key;
    
    //Perform linear search to find the position/index of the key in arr.
    for(int i = 0; i < n; ++i) {
        if (key == arr[i]) { //compare key with every element of array one by one linearly
            cout << "Element found. The index of " << key << " in arr is " << i << endl;
            return 0; //if the key is found in arr then we don't need to go any further, we can just exit out of the program and print a message.
        }
    } //loop ends.
    
    cout << "Element " << key << " is not found in the arr" << endl;
    
    return 0;
}
