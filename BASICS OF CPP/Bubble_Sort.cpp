#include <iostream>
using namespace std;

int arr[5] = {4, 65, 7, 8, 6};

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
        cout << arr[i] << " ";
    }
}