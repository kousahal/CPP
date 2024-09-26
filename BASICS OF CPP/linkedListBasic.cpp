// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node (int value){
//         data = value;
//         next = NULL;

//     }
// };

// int main(){

// Node A1(4);  //Statically

// // For Dynamically

// Node *Head;
// Head = new Node(4);

// }
#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

int main()
{

    node *Head;

    Head = new node(45);
    cout << Head->data;
    cout << Head->next;
}
