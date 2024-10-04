#include <iostream>
using namespace std;

// Declare and initialize an array with 5 elements
int array[5] = {7, 6, 5, 4, 8};

int main() {
    // Outer loop: iterate through the first 4 elements of the array
    for (int i = 0; i < 4; i++) {
        // Set 'index' to the current position 'i'
        int index = i;

        // Inner loop: compare the current element with the remaining elements
        for (int j = i + 1; j < 5; j++) {
            // If the current element (array[j]) is smaller than array[i], update 'index' to 'j'
            if (array[j] < array[i])
                index = j;
        }

        // Swap the current element with the smallest element found in the inner loop
        swap(array[i], array[index]);
    }

    // Print the sorted array
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " "; // Output each element followed by a space
    }

    return 0;
}

