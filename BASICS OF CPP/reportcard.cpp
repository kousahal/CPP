#include <iostream>
using namespace std;

class Report_Card
{
    string Name;
    int Math_Marks, Science_Marks;
    int Total_Marks;

public:
    Report_Card(string s, int m1, int m2)
    {
        Name = s;
        Math_Marks = m1;
        Science_Marks = m2;
        cin >> m1 >> m2;
        if (Total_Marks > 80)
        {
            cout << "A Grade";
        }
        else if (Total_Marks > 40 && Total_Marks < 79)
        {
            cout << "B grade";
        }
    }
};

int main()
{
    Report_Card student1;
}