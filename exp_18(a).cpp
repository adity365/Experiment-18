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
