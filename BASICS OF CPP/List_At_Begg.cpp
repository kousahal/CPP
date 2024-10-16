#include <iostream>

// Node structure representing each element in the linked list
struct Node
{
    int data;   // Data part of the node
    Node *next; // Pointer to the next node in the list

    // Constructor to initialize a new node
    Node(int val)
    {
        data = val;     // Set the data
        next = nullptr; // Initialize next to null
    }
};

// Class for the singly linked list
class SinglyLinkedList
{
private:
    Node *head; // Pointer to the head of the list

public:
    // Constructor to initialize the head to null
    SinglyLinkedList()
    {
        head = nullptr;
    }

    // Function to insert a new node at the beginning of the list
    void insertAtBeginning(int val)
    {
        // Create a new node with the provided value
        // create a new node with the provided value
                Node *newNode = new Node(val);

        // Make the new node point to the current head
        newNode->next = head;

        // Update the head to be the new node
        head = newNode;

        std::cout << "Inserted " << val << " at the beginning of the list." << std::endl;
    }

    // Function to display the linked list
    void display()
    {
        Node *current = head; // Start from the head

        // Traverse through the list and print the data
        while (current != nullptr)
        {
            std::cout << current->data << " -> "; // Print the current node's data
            current = current->next;              // Move to the next node
        }
        std::cout << "nullptr" << std::endl; // End of the list
    }

    // Destructor to free allocated memory
    ~SinglyLinkedList()
    {
        Node *current = head; // Start from the head
        Node *nextNode;

        // Loop through the list and delete each node
        while (current != nullptr)
        {
            nextNode = current->next; // Store the next node
            delete current;           // Delete the current node
            current = nextNode;       // Move to the next node
        }
    }
};

// Main function to demonstrate the functionality
int main()
{
    SinglyLinkedList list; // Create a new linked list

    // Inserting values at the beginning
    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtBeginning(30);

    // Display the list
    list.display();

    return 0; // Indicate successful completion
}
