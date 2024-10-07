#include <iostream>
using namespace std;

class vehicle{
    public:
    int n;

    void car(){
        cout<<"Enter the number : ";
        cin>>n;
        cout<<n;
    }

        void displaycar( ){
        cout<<"this is the second copy: ";
    };
    };

int main(){
    vehicle obj;
    obj.car();
    obj.displaycar();
    // car(4);
}