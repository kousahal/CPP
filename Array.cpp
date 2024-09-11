#include<iostream>
using namespace std;
int main(){
    
int array[] = {1, 2, 3, 4, 5}; // Declaration and initialization of an integer array with elements 1, 2, 3, 4, and 5

// Output the size of the array in bytes
cout << "Size of the Array in Bytes = " << sizeof(array) << endl;

// Calculate the length of the array by dividing its size by the size of one element
int Length = sizeof(array) / sizeof(array[0]);

// Output the length of the array
cout << "Length of Array = " << Length << endl;

// Traversing Through the Array

// FOR LOOP
for(int i=0; i<Length; i++){ // Loop body where you can perform operations on each element if needed.
    cout<<array[i]<<endl;                
}
                               


} 