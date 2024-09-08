#include<iostream>
using namespace std;
int main(){

int n = 3;
int m = 4;
cin>>n;
cin>>m;
// for HOLLOW RECTANGULAR PATTERN;
// ******
// *    *
// *    *
// ******
        
for(int i=1; i<=n ; i++){
    for(int j=1; j<=m ; j++){
        if (i==1 || j==1 || i==n || j==m){
           cout<<"*";
        }
        else{
            cout<<" ";
        }
        
    }
    cout<<endl;
}


// //for TRIANGULAR PATTERN;
// // *
// // **
// // ***
// // ****

for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        cout<<"* ";
    }
    cout<<endl;
} 

// // ****
// // ***
// // **
// // *

for(int i=1; i<=n ; i++){
    for(int j=1; j<=n-i+1; j++){
        cout<<"* ";
    }
    cout<<endl;
}
        
// for PYRAMID PATTERN:
// //      * 
// //     ***
// //    *****
// //   *******
 
 for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){
        cout<<" ";
    }
    for(int j =1; j<=2*i-1;j++){
        cout<<"*";
    }
    cout<<endl;
 }

//  *****
//   ***
//    *
 for(int i=1; i<=n; i++){
    for(int j=1; j<=i-1; j++){
        cout<<" ";
    }
    for(int j=1; j<=n-i;j++){
        cout<<"*";
    } 
    cout<<endl;
 }
 
 return 0;

}
// Leaving Patterns now it is bit confusing
