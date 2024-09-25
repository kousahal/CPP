#include <iostream>
using namespace std;
class Car
{
public:
    void Range_Rover()
    {
        cout << "Defender"<<endl;
    }
    void colour()
    {
        cout << "Bottle Green"<<endl;
    }
};
class Model : public Car
{
public:
    void Engine()
    {
        cout << "V12" <<endl;
    }
};

int main()
{

    Model RR;
    RR.Range_Rover();
    RR.colour();
    RR.Engine();
}