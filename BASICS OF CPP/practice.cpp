// #include <iostream>
// using namespace std;

// class vehicle{
//     public:
//     int n;

//     void car(){
//         cout<<"Enter the number : ";
//         cin>>n;
//         cout<<n;
//     }

//         void displaycar( ){
//         cout<<"this is the second copy: ";
//     };
//     };

// int main(){
//     vehicle obj;
//     obj.car();
//     obj.displaycar();
//     // car(4);
// }

// #include <iostream>
// using namespace std;

// #include <iostream>
// using namespace std;

#include <iostream>
using namespace std;

int main() {
    int p;
    cin >> p;

    for (int i = 2; i <= p; i++) {
        int j;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                break; // If a divisor is found, exit the loop
            }
        }

        // If the loop completes without breaking, j will be equal to i
        if (j == i) {
            cout << i << endl;
        }
    }

    return 0;
}

