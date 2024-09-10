// #include <iostream>
// using namespace std;

// int main() {
//     int x = 5;
//     do{
//         cout<< x;
//         x--;
//     }while(x<0);
// }
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int count = 0;
	while(n != 0){
	    n /= 10;
	    count++;
	}
	cout<<count << "\n";

}
