#include <iostream>
using namespace std;

class Rectangle
{
    // Data members
private:
    double length;
    double breadth;

public:
    // Constructor 1: No parameters, set length and breadth to 0
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    // Constructor 2: Two parameters, set length and breadth to provided values
    Rectangle(double l, double b)
    {
        length = l;
        breadth = b;
    }

    // Constructor 3: One parameter, set both length and breadth to the same value
    Rectangle(double side)
    {
        length = side;
        breadth = side;
    }

    // Function to calculate the area of the rectangle
    double calculateArea()
    {
        return length * breadth;
    }
};

int main()
{
    // Creating objects using different constructors
    Rectangle rect1;         // No parameters
    Rectangle rect2(10, 20); // Two parameters
    Rectangle rect3(15);     // One parameter

    // Printing the areas of the rectangles
    cout << "Area of Rectangle 1: " << rect1.calculateArea() << endl;
    cout << "Area of Rectangle 2: " << rect2.calculateArea() << endl;
    cout << "Area of Rectangle 3: " << rect3.calculateArea() << endl;

    return 0;
}
