#include<iostream>
using namespace std;
int main(){

// Check the Alphabate if it is vowel or not:
       //     Why Switch?
        // The switch statement is like having all the light switches neatly organized—you know exactly which one to flip.
        // It’s efficient and faster because it directly jumps to the right case without checking every door (like in if-else).
        // If we use IF ELSE statement than we have to write 5 times if else to reduce the code length.
    
    
    cout << "Enter the Alphabate = " ;          // Declare a variable to store a single character
    char alphabate;             // Prompt user to enter an alphabet
    cin >> alphabate;       // Read and store the entered character


    switch (alphabate) // Check against cases
    {
        case 'a':       // If 'a' 
                cout << "It is a Vowel" << endl;         // Output that it's a vowel
                break;                         // Similar cases for 'i', 'o', and 'u'
        case 'e':
                cout << "It is a Vowel" << endl;
                break;
        case 'i':
                cout << "It is a Vowel" << endl;
                break;
        case 'o':
                cout << "It is a Vowel" << endl;
                break;
        case 'u':
                cout << "It is a Vowel" << endl;
                break;
    default:                                             // If not a Vowels
       cout <<"It is a Consonent"<< endl;
    }
}