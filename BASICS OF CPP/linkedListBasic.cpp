#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node (int value){
        data = value;
        next = NULL;
    
    }
};

int main(){

Node A1(4);  //Statically

// For Dynamically 

Node *Head;
Head = new Node(4);




}