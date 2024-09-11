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
cout<<"FOR LOOP"<<endl;
for(int i=0; i<Length; i++){ // Loop body where you can perform operations on each element if needed.
    cout<<array[i]<<endl;                
}

// FOR EACH LOOP
cout<<"FOR EACH LOOP"<<endl;
for (int ele : array) {
    // Loop body where you can perform operations on each element if needed.
    // For now, we're just printing the value of 'ele'.
    cout << ele << endl;
}

// WHILE LOOP
cout<<"WHILE LOOP"<<endl;
int index = 0;
while (index < Length) {
    // Loop body where you can perform operations on each element if needed.
    // Here, we're printing the value of 'array[index]'.
    cout << array[index] << endl;
    index++; // Increment the index for the next iteration
}
// SUM OF ARRAY
// SUM OF ARRAY
int sum = 0; // Initialize an integer variable 'sum' to 0 which will hold the total sum of array elements.

for(int i = 0; i < Length; i++){ // Start a for loop with 'i' initialized to 0, continue until 'i' is less than 'length', increment 'i' by 1 after each iteration.
    sum += array[i]; // Add the value of the current element in the array (at index 'i') to the variable 'sum'.
}

cout << sum << endl; // Output the final value of 'sum' to the console followed by a new line.

}