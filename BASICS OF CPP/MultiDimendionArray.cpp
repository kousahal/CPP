#include <iostream>
using namespace std;

int main() {
 int n ; // Set the number of rows
 int m ; // Set the number of columns
 cout<<"ROWS = ";
 cin>>n;
 cout<<"COLUMNS = ";
 cin>>m;
    // Declare two 2D arrays
    int array1[n][m];
    int array2[n][m];

    // Take input for Array 1
    cout << "Enter values for Array 1:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "Enter value for Array 1[" << i << "][" << j << "]: ";
            cin >> array1[i][j];
        }
    }

    // Take input for Array 2
    cout << "Enter values for Array 2:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "Enter value for Array 2[" << i << "][" << j << "]: ";
            cin >> array2[i][j];
        }
    }

    // Add corresponding elements and store in a result array
    int Sum[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            Sum[i][j] = array1[i][j] + array2[i][j];
        }
    }

    // Display the resulting array
    cout << "\nResulting array (sum of elements):\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
