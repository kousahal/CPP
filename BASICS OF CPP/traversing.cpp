#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void traverse(ListNode *head)
{
    ListNode *current = head;
    while (current != NULL)
    {
        cout << current->val << " =>> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

int main()
{

    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);

    cout << "Traversing linked list:" << endl;
    traverse(head);

    return 0;
}
