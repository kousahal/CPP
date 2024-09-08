#include <iostream>                    //header file or pre processed/written code:
using namespace std;                  //Taking input and output as standard:
int main(){                          //main funtion where the compiler starts running code 

// SIMPLE QUESTION OF IF AND ELSE 
    // Write a code for the score , take input form the user:
    //  Score > 80, print "WELL DONE"
    //  Score = 50 to 80, print "CAN BE IMPROVE"
    // Score < 50, pritn "POOR PERFORMANCE" 


    cout << "Write the score you get = ";
    int score;                                //DATA TYPE = int :
    cin >> score ;                            //taking input from the user:

    if(score>=80 ){                          // Putting condition after if as per mentioned in the quetion: 
        cout << endl << "WELL DONE"; 
    }
     else if (score >=50 && score < 80){    // && is the logical operator it is checking true value for the both expressions:
        cout << endl <<"CAN BE IMPROVE";    // << this is called extraction operator and same as >> this is called insertion operator
    }
     else {                                 // We cannot assign condition in else statment thats why we used else if:
        cout << endl << "POOR PERFOMANCE!!";
    }
}

//this was the simple code of if else statement hope you'll understand 