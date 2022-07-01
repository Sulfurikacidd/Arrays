//
//  main.cpp
//  Section 8 Arrays
//
//  Created by Muhammad Talal on 2022-06-23.
//
// Arrays

/*
 
 * List of values of same datatype
 * declaration = type name[size]
 * init: type name[size] = {value, value, value}
 * access: name[index] (index starts from 0)
 * access using loop = for (int i = 0; i < length of array, ++i){ array[i] }
 * array can be of any datatypes
 * Number of values can be < then the size, the rest of the values will be assigned a value 0
 * During init or declaration you DON'T have to assign the size (it's not a must) -- it will automatically take the size corresponding to the number of values inside
 
 */


#include <iostream>
using namespace std;

int main() {
    
    int A[] = {2, 4, 6}; // This array will of size 3. 
    cout << A;
    
    
    return 0;
}
