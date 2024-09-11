#include <iostream>
using namespace std;

int main() {
    int n, m; // Define array dimensions
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    int arr[n][m]; // Declare a 2D array

    // Input values for the array
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "Enter value for arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i<n; i++){
        for(int j=0; j<m ; j++){
            cout <<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Rest of your code (processing or output) goes here

    return 0;
}
