#include<iostream>
using namespace std;

class Teacher{
private:
string Name;
int Salary;

public:
void name(string n){
    Name=n;
}
int salary(int s){
    Salary=s;
}
void getname(){
    cout<<Name<<endl;
}

int getsalary(){
    cout<<"Enter the code for Salary Reveal ";
    int pin;
    cin>>pin;
    if(pin==78050){
        cout<<Salary;
    }else 
    cout<<"Don't be a SPY"<<endl;
   
    }
};

int main(){

    Teacher t1;
    t1.name("rohit");
    t1.salary(120000);

    t1.getname();
    t1.getsalary();
}