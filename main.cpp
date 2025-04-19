/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: sjmcf
 *
 * Created on April 19, 2025, 1:35 PM
 */

#include <iostream>
#include <string>

using namespace std;

//Generic binary search function
template <typename T>
int binarySearch(const T arr[], int size,T key){
    int low = 0, high = size - 1;
    
    while(low < high){
        int mid = low + (high - low) / 2;
        
        if(arr[mid]== key){
            return mid; //Found
        } else if (arr[mid] < key){
            low = mid + 1; //Search right half
        }else{
            high = mid - 1; //Search left half
        }
    }
    
    return -1; //Not Found
}
/*
 * 
 */
int main(int argc, char** argv) {
    //Testing the function
    int intArr[] = {1, 3, 5, 7, 9};
    double doubleArr[] = {1.1, 3.3, 5.5, 7.7, 9.9};
    string stringArr[] = {"apple", "banana", "cherry", "date", "fig"};
    
    int intKey = 7;
    double doubleKey = 5.5;
    string stringKey = "cherry";
    
    cout << "Binary search for " << intKey << "in int array: " << binarySearch(intArr , 5, intKey) << endl;
    
    cout << "Binary search for " << doubleKey << "in double array: " << binarySearch(doubleArr, 5, doubleKey) << endl;
    
    cout << "Binary search for \"" << stringKey << "\" in string array: " << binarySearch(stringArr,5, stringKey) << endl;

    return 0;
}

