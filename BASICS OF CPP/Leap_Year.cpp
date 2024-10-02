#include <iostream>
using namespace std;

int main (){
  cout<<"Welocome to Leap Year Program : "<<endl<<"Give the Year you want to Search For Leap Year or not : ";
  int leap_year;
  cin >>leap_year;
  if (leap_year%400==0){
    cout << "Your given year "<<leap_year<<" is a leap year.";
  }else if(leap_year%4==0 && leap_year%100 != 0){
    cout <<"Your given year "<<leap_year<<" is a leap year.";
  }else {
    cout <<"Your given year is not a leap year.";
  }
}