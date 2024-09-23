// #include <bits/stdc++.h>
// #include <string>
// using namespace std;
// struct node {
//    int data;
//    struct node *next;
// };
// struct node *head = NULL;
// struct node *current = NULL;

// // display the list
// void printList(){
//    struct node *p = head;
//    cout << "\n[";
   
//    //start from the beginning
//    while(p != NULL) {
//       cout << " " << p->data << " ";
//       p = p->next;
//    }
//    cout << "]";
// }

// //Insertion at the beggining 
// void insertatbegin(int data){
   
//    //create a link 
//    struct node *lk = (struct node*) malloc(sizeof(struct node));
//    lk->data = data;
   
    
//    //point it to old first node
//    lk->next = head;
   
   
//    //point first to new first node
//    head = lk;
// }
// int main(){
//    insertatbegin(11);
//    insertatbegin(10);
//    insertatbegin(12);
//    insertatbegin(56);
//    insertatbegin(11);
//    insertatbegin(12);
//    insertatbegin(22);
//    insertatbegin(30);
//    insertatbegin(44);
//    insertatbegin(50);
   
//    cout << "Linked List: ";
   
//    // print list
//    printList();
// }
#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;         // Variable to store the data
    Node* next;       // Pointer to the next node in the list
};

// Function to insert a new node at the end of the list
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node();  // Allocate memory for a new node
    newNode->data = value;       // Set the data for the new node
    newNode->next = NULL;        // New node will be the last, so its next is NULL

    // If the list is empty (head is NULL), make the new node the head
    if (head == NULL) {
        head = newNode;  // Point head to the new node
        return;          // Exit the function
    }

    // Otherwise, traverse to the last node
    Node* temp = head;  // Temporary pointer to traverse the list
    while (temp->next != NULL) { // Loop until we find the last node
        temp = temp->next;  // Move to the next node
    }

    // Link the last node to the new node
    temp->next = newNode;  // Set the next of the last node to the new node
}

// Function to display the linked list
void displayList(Node* head) {
    Node* temp = head;  // Temporary pointer to traverse the list
    while (temp != NULL) { // Loop until we reach the end of the list
        cout << temp->data << " -> "; // Print the data of the current node
        temp = temp->next; // Move to the next node
    }
    cout << "NULL" << endl; // Indicate the end of the listxxx
}

int main() {
    Node* head = NULL; // Initialize the head of the list as NULL (empty list)

    // Insert nodes into the linked list
    insertAtEnd(head, 10);  // Insert a node with value 10
    insertAtEnd(head, 20);  // Insert a node with value 20
    insertAtEnd(head, 30);  // Insert a node with value 30

    // Display the linked list
    displayList(head);  // Call the function to print the list

    return 0; // Indicate that the program ended successfully
}
