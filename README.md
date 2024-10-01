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

CONCLUSION :
We have learned and implemented stack data structure in C++.
