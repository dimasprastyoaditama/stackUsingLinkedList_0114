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
            else
            {
                Node* current = top;
                while (current !=NULL)
                {
                    cout << cuurent->data << " " << endl;
                    current = current->next;
                }
                cout << endl;
            } // Return the value of the top node 
        }

    int main()
    {
        Stacchoice = 0;
        int value;
        
        while (choice != 4)
        {
            cout << "1. Push\n";
            cout << "2. Pop\n";
            cout << "3. Peek\n";
            cout << "4.. Exit\n";
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Enter the value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.peek();
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
                break;
            }
            cout << endl;
        }
    }
    return 0;
}