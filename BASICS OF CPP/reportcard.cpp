#include <iostream>
using namespace std;

class Report_Card
{
    string Name;
    int Math_Marks, Science_Marks;
    int Total_Marks;

public:
    void input()
    {
        cout << "Name: ";
        cin >> Name;
        cout << "Math: ";
        cin >> Math_Marks;
        cout << "Science: ";
        cin >> Science_Marks;
         cout << "Your name = " << Name << endl;
        cout << "Marks in Math = " << Math_Marks << endl;
        cout << "Marks in Math = " << Science_Marks << endl;
    };
    void output()
    {
       
        Total_Marks = Math_Marks + Science_Marks;
        cout << "Your Total Marks are = ";
        cout << Total_Marks;
    };
    void percentage{
        
    }
    
};

int main()
{
    Report_Card S1;
    S1.input();
    S1.output();
}