#include <iostream>
using namespace std;

class Report_Card
{
    string Name;
    int Math_Marks, Science_Marks;
    int Total_Marks;

public:
    void TakinInput()
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
    void Calculate()
    {

        {
            Total_Marks = Math_Marks + Science_Marks;
            cout << "Your Total Marks are = ";
            cout << Total_Marks << endl;
        }
    }
    void percentage()
    {
        int pin;
        cout << "Enter pin for percentage:";
        cin >> pin;
        if (pin == 123)

            
        {
            int per = Total_Marks / 2;
            if (per > 90)
            {
                cout << "A" << endl;
            }
            else if (per < 89)
            {
                cout << "B" << endl;
            }
        }
        else
        {
            cout << "Do not Access any other's Percentage ";
        }
    }
};

int main()
{
    Report_Card S1;
    S1.TakinInput();
    S1.Calculate();
    S1.percentage();

    Report_Card S2;
    S2.TakinInput();
    S2.Calculate();
    S2.percentage();
}