#include <iostream>
using namespace std;
// int sum(int a,int b){
//     int ans = a+b;
//     return ans;
// } 
// int main(){
//     int a,b;
//     cout <<"enter two number " ;
// ;    cin>>a>>b;
    
//     cout<<sum(a,b);
//     cout<<endl;

bool prime(int n){
    if(n<2)
    return 0;

    for(int i= 2; i<n; i++ ){
        if(n%i==0 )
        return 0;
    }
     
    return 1;
}

    int fact(int n)
    {
        int ans = 1;
        for(int i = 1 ;i<=n;i++)
         ans = i*ans;
         return ans;

    }


    int main(){
        int a,b;
        cout<<"Enter the number A= ";
        cin>>a;
        cout<<"Enter the number B= ";
        cin>>b;

       cout<<prime(a)<<endl;
       if (prime(a)==0){
        cout<<"NO,A is not a prime number"<<endl;
      }else{
        cout<<"YES,A is a prime number "<<endl;
      }
      cout<<prime(b)<<endl;
       if (prime(b)==0){
        cout<<"NO,B is not a prime number"<<endl;
      }else{
        cout<<"YES,B is a prime number "<<endl;
      }

      cout<<"The factorial fo the A is = ";
      cout<<fact(a)<<endl;
      
      cout<<"The factorial fo the B is = ";
      cout<<fact(b)<<endl;
    
    
    }