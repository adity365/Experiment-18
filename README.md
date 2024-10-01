# Experiment-18
Aim : To study and implement Stack(data structure) in C++.

# STACK
In C++, a stack is a data structure that follows the Last In, First Out (LIFO) principle. This means that the most recently added element is the first to be removed. Imagine a stack of plates: you add plates to the top, and when you want to remove a plate, you take the one from the top first.

Key Characteristics of a Stack:
LIFO Structure: The last element added is the first to be removed.
Push Operation: Adding an element to the top of the stack.
Pop Operation: Removing an element from the top of the stack.
Peek/Top Operation: Accessing the element on top of the stack without removing it.
Underflow and Overflow:
Underflow occurs when you try to pop from an empty stack.
Overflow occurs when you try to push an element into a full stack (if the stack has a fixed size).

CODE WHICH EXPLAINS STACK 
```
// Stack

// Name --> Aditya Agarwal
// PRN --> 23070123162

#include <iostream>
using namespace std;

#define size 5
#define ERROR -9999

class Stack {
    int top, ar[size]; // Stack of fixed size
public:
    Stack() {
        top = -1;
    }
    
    void push(int num);
    int pop();
    int peak();
    void disp();
};

void Stack::push(int num) {
    if (top == size - 1) {
        cout << "STACK OVERFLOW : Stack is full" << endl;
        return;
    }
    ar[++top] = num;
}

int Stack::pop() {
    if (top == -1) {
        cout << "STACK UNDERFLOW : Stack is empty" << endl;
        return ERROR;
    }
    return ar[top--];
}

int Stack::peak() {
    if (top == -1) {
        cout << "STACK UNDERFLOW : Stack is empty" << endl;
        return ERROR;
    }
    return ar[top];
}

void Stack::disp() {
    if (top == -1) {
        cout << "STACK UNDERFLOW : Stack is empty" << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= top; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
}

int main() {
    Stack s1;
    
    s1.push(7);
    s1.push(10);
    s1.push(4);
    
    int val = s1.pop();
    cout << "Popped value: " << val << endl;
    
    int top = s1.peak();
    cout << "Top value: " << top << endl;
    
    s1.disp();  // Displaying stack elements
    
    return 0;
}

```
OUTPUT :
![image](https://github.com/user-attachments/assets/0597b940-c3c5-483e-9d90-41cff092a991)

CODE WHICH WAS DONE IN DSA WORKSHOP:
```
#include <iostream>
using namespace std;

// Stack class definition
class Stack {
private:
    int top;          // Index of the top element in the stack
    int maxSize;     // Maximum size of the stack
    int* stackArray; // Array to hold stack elements

public:
    // Constructor to initialize the stack
    Stack(int size) {
        maxSize = size;               // Set the maximum size
        stackArray = new int[maxSize]; // Allocate memory for stack
        top = -1;                     // Initialize top to -1 (empty stack)
    }

    // Destructor to clean up allocated memory
    ~Stack() {
        delete[] stackArray; // Deallocate memory for stack
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1; // Returns true if top is -1
    }

    // Function to check if the stack is full
    bool isFull() {
        return top == maxSize - 1; // Returns true if top is at maxSize - 1
    }

    // Function to add an element to the stack
    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Unable to push " << value << endl;
            return; // Do nothing if the stack is full
        }
        stackArray[++top] = value; // Increment top and add value to stack
        cout << value << " pushed to stack." << endl;
    }

    // Function to remove and return the top element from the stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Unable to pop." << endl;
            return -1; // Return -1 if the stack is empty
        }
        return stackArray[top--]; // Return top value and decrement top
    }

    // Function to get the top element of the stack without removing it
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty. No top element." << endl;
            return -1; // Return -1 if the stack is empty
        }
        return stackArray[top]; // Return the top element
    }

    // Function to display the elements of the stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl; // Notify if stack is empty
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) { // Print stack elements from top to bottom
            cout << stackArray[i] << " ";
        }
        cout << endl;
    }
};

// Main function to demonstrate stack operations
int main() {
    int size, choice, value;

    cout << "Enter the size of the stack: ";
    cin >> size; // Get stack size from user
    Stack stack(size); // Create a stack of given size

    do {
        // Display menu options
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice; // Get user choice

        switch (choice) {
            case 1: // Push operation
                cout << "Enter value to push: ";
                cin >> value; // Get value to push
                stack.push(value); // Call push function
                break;
            case 2: // Pop operation
                value = stack.pop(); // Call pop function
                if (value != -1) // Check if pop was successful
                    cout << value << " popped from stack." << endl;
                break;
            case 3: // Peek operation
                value = stack.peek(); // Call peek function
                if (value != -1) // Check if peek was successful
                    cout << "Top element is: " << value << endl;
                break;
            case 4: // Display operation
                stack.display(); // Call display function
                break;
            case 5: // Exit option
                cout << "Exiting program." << endl;
                break;
            default: // Invalid choice
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5); // Repeat until user chooses to exit

    return 0; // Indicate successful completion
}
```
OUTPUT :
![image](https://github.com/user-attachments/assets/04f5469d-b939-45b8-84bf-bc2164eedff4)
![image](https://github.com/user-attachments/assets/016dd941-16e5-42e4-a63c-013db093e4dc)


CONCLUSION :
We have learned and implemented stack data structure in C++.
