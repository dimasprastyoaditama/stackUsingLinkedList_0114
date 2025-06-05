#include <iostream>
using namespace std;    

//Node class representing a single node in the linked list
class Node 
{
public:
    int data;
    Node* next;

    Node()
    {
        next = NULL;
    }
};

//stack class
class Stack 
{
    private:
        Node* top; // Pointer to the top node of the stack
    public:
        Stack() 
        {
            top = NULL; // Initialize the stack with a null top pointer
        }

        //push operation: insert an element at the top of the stack
        int push(int value) 
        {
            Node* newNode = new Node(); // 1. Allocate memory for a new node
            newNode->data = value;      // 2. Assign value
            newNode->next = top;        // 3. set the next pointer of the new node to the current 
            top = newNode;              // 4. Update the top pointer to point to the new node
            cout << "push value: " << value << endl; 
            return value;
        }

        //isEmpty operation: check if the stack is empty
        bool isEmpty() 
        {
            return top == NULL; // Return true if the top pointer is null, indicating the stack is empty
        }

        //pop operation: remove and return the top element of the stack
        void pop() 
        {
            if (isEmpty()) 
            {
                cout << "Stack is empty." << endl; 
                return; //if the stack is empty, print a message and return
            }
         
            cout << "popped value: " << top->data << endl; 
            top = top->next; // Update the top pointer to the next node
           
        }
        //pek/top operation: return the top element of the stack without removing it
        void peek()
        {
            if (isEmpty()) 
            {
                cout << "List is empty." << endl; 
                return; //if the stack is empty, print a message and return
            }

