#include <iostream>
using namespace std;
int main(){


    int arr[5]={23,1,10,5,2};

    for (int i = 0; i<5; i++){
        for(int j = i+1; i<5; j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
        cout<<arr[i];

    }


}