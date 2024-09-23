#include <iostream>
using namespace std;

class Rectangle
{
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
        length = l;  // 'l' is assigned to 'length'
        breadth = b; // 'b' is assigned to 'breadth'
    }

    // Constructor 3: One parameter, set both length and breadth to the same value (square)
    Rectangle(double side)
    {
        length = side;  // 'side' is assigned to both 'length'...
        breadth = side; // ...and 'breadth', making it a square
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
    Rectangle rect3(15);     // One parameter (this will create a square with side 15)

    // Printing the areas of the rectangles
    cout << "Area of Rectangle 1: " << rect1.calculateArea() << endl;
    cout << "Area of Rectangle 2: " << rect2.calculateArea() << endl;
    cout << "Area of Rectangle 3 (Square): " << rect3.calculateArea() << endl;

    return 0;
}
