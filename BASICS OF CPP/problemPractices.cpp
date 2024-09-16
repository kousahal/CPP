// #include <iostream>
// using namespace std;

// int main() {
// //     int x = 5;
// //     do{
// //         cout<< x;
// //         x--;
// //     }while(x<0);
// // }
// #include <iostream>
// using namespace std;

// int main() {
// 	int n;
// 	cin>>n;
// 	int count = 0;
// 	while(n != 0){
// 	    n /= 10;
// 	    count++;
// 	}
// 	cout<<count << "\n";
// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     string A, B, C, D, E, F, G, H, I;
//     cin >> A >> B;
//     cin >> C >> D >> E;
//     cin >> F >> G >> H >> I;
//     cout << A << " " << B << " " << C << " " << D << " " << E << " " << F << " " << G << " " << H << " " << I;
   
//    int a = 48;
//    a = a<<1;
//    cout << a;1
    // int i;
    // while(i!=0){
        
    // }














   
#include <bits/stdc++.h>
using namespace std;


int countSquares(int row, int column)
{

	
	int c1 = min(row, column)-1;

	int c2 =8- max(row,column);

	int c3 = min(row,9 -column)-1;

	int c4 = 8-max(row,9-column);

	return (c1 + c2 + c3 + c4);
}

// Driver code
int main()
{

	// Bishop's Position
	int row = 4, column = 4;

	cout << countSquares(row, column);

	return 0;
}
