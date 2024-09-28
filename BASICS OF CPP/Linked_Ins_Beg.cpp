#include <iostream>
using namespace std;

// Define a class 'node' which will be the building block of the linked list
class node
{
public:
    int data;   // This will store the integer data of the node
    node *next; // This will store the address of the next node in the list (a pointer to the next node)

    // Constructor for the node class to initialize data and next pointer
    node(int data)
    {
        this->data = data; // Initialize the data field with the passed argument
        this->next = NULL; // Initialize the next pointer to NULL (no next node yet)
    }
};

int main()
{
    node *head;  // Pointer 'head' will point to the first node in the list
    head = NULL; // Initialize head to NULL, meaning the list is empty at the start

    // Initialize an array with values to add to the linked list
    int arr[] = {1, 2, 3, 4, 5};

    // Loop through the array and create the linked list
    for (int i = 0; i < 5; i++) // 'i' starts from 0 and goes up to 4, iterating through the array
    {
        // If the linked list is empty (i.e., head is NULL), create the first node
        if (head == NULL)
        {
            head = new node(arr[i]); // Allocate memory for a new node, set its data to arr[i]
        }
        else // If the linked list already has nodes, insert a new node at the front (head insertion)
        {
            node *temp;              // Create a temporary pointer 'temp' to hold the new node
            temp = new node(arr[i]); // Create a new node and store arr[i] in its data field
            temp->next = head;       // Set the new node's next pointer to point to the current head
            head = temp;             // Update the head to point to the new node (the new headb)
        }
    }

    // Print out the linked list
    node *temp = head; // Set a temporary pointer to traverse the linked list, starting from the head

    // Traverse the list until the end (when temp becomes NULL)
    while (temp != NULL)
    {
        cout << temp->data << " "; // Print the data of the current node
        temp = temp->next;         // Move the temp pointer to the next node
    }

    // Return statement for the main function, though it's not strictly necessary in C++
    return 0;
}
