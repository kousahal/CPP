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
        this->next = NULL;
    }
    void insert_At_head(node* &head, int val){
        node * new_node= new node (val);
        new_node->next = head;
        head = new_node;
    }
};
int main()
{
    node * n;
    n = new node(1);
    cout<<n->data<<" "<<n->next<<endl;   
}