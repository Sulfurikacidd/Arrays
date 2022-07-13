//
//  main.cpp
//  binary_search
//
//  Created by Muhammad Talal on 2022-07-01.
//
// This program explains how to perform Binary search on an Array.
// Array has to be sorted.
// if mid is bigger than key - search on left. if mid is smaller than key - search on right.

#include <iostream>
using namespace std;

int main() {
    //write your program here..
    
    //Step 2. declare the variable(s) needed for the problem
    const int n = 10; //size of the array
    int arr[n] = {6,8,13,17,20,22,25,28,30,35};
    int mid_index;
    int low_index = 0;
    int high_index = n - 1;
    int key; //element to find the index of inside array
    int count = 0; //number of time we run the loop or search for the element.
    
    //Step 1. Ask user for the element to find
    cout << "Enter a value you want to find in the array: ";
    
    //Step 3. Store the key in the appropriate variable
    cin >> key;
    
    //Step 4. Ready to perform search now; use while loop to iterate through the array & find the element using Binary search
    while(low_index <= high_index) { //when should the loop stops ? When low becomes bigger than high
        
        //everytime we make a seach for key we add 1 in count
        ++count;

        //Step 1. find the mid
        mid_index = (low_index + high_index) / 2;
        
        //Step 2. if my key == mid then we have found the value
        if (key == arr[mid_index]) {
            cout << "Hurrah found at index: " << mid_index << endl << "Count value is: " << count << endl;
            return 0; // we have found the value no need to search for more, exit the program.
        }
         //Step 3. if my key < mid then we need to search on left
        if (key < arr[mid_index]) {
            high_index = mid_index - 1; // move the high index to search on left side
        }
        
        //Step 4. if my key > mid then we need to search on right
        if (key > arr[mid_index]) {
            low_index = mid_index + 1; // move the low index to search on right side
        }
        
    }///loop ends
    
    count = n;
    cout << "Key was not found in the array" << ", count is " << count << endl;
    return 0;
}

/*
 * Index of starting element of Array is 0.
 * Index of last element of Array is size - 1.
 * We use while loop when we don't know the number of iterations.
 * If you add count at the end of the while loop, the last iteration which is key == arr[mid] will never be added into the count as program had already exited out (return 0)
 */
