# 🏗️ **Stack Implementation Using Array in C++**

This repository contains a **stack** implementation using a fixed-size array in C++. The stack follows the **LIFO (Last In, First Out)** principle, meaning the last element pushed onto the stack is the first one to be popped off.

---

## 🌟 **Features**

- **push(t Element)**: Adds an element to the top of the stack.
- **pop()**: Removes the top element from the stack.
- **pop(t& Element)**: Removes the top element and stores it in a reference parameter.
- **getTop(t& stackTop)**: Retrieves the top element without removing it.
- **isEmpty()**: Checks if the stack is empty.
- **print()**: Prints the stack from top to bottom.

---

## 🔍 **Code Structure**

### **Stack Class - `stack`**

The class `stack` provides the following methods:

- **`push(t Element)`**: Adds an element to the top of the stack.
- **`pop()`**: Removes the top element from the stack.
- **`pop(t& Element)`**: Removes the top element and stores it in the reference parameter.
- **`getTop(t& stackTop)`**: Retrieves the top element without removing it.
- **`isEmpty()`**: Returns `true` if the stack is empty, `false` otherwise.
- **`print()`**: Prints all elements in the stack from top to bottom.

---

## 📋 **Example Usage**

```cpp
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

template <class t>
class stack
{
    int top;
    t item[MAX_SIZE];

public:
    stack() {
        top = -1;
    }

    void push(t Element) {
        if (top >= MAX_SIZE - 1) {
            cout << "STACK full on Push";
        } else {
            top++;
            item[top] = Element;
        }
    }

    bool isEmpty() {
        return top < 0;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack empty on pop";
        } else {
            top--;
        }
    }

    void pop(t& Element) {
        if (isEmpty()) {
            cout << "Stack empty on pop";
        } else {
            Element = item[top];
            top--;
        }
    }

    void getTop(t& stackTop) {
        if (isEmpty()) {
            cout << "Stack empty on getTop";
        } else {
            stackTop = item[top];
            cout << stackTop << endl;
        }
    }

    void print() {
        cout << "[";
        for (int i = top; i >= 0; i--) {
            cout << item[i] << " ";
        }
        cout << "]\n";
    }
};

int main() {
    stack<double> s;
    s.push(5.2);
    s.push(10);
    s.push(15);
    s.push(20);
    s.print();  // Output: [20 15 10 5.2]

    s.pop();
    s.push(7);
    s.print();  // Output: [7 15 10 5.2]

    return 0;
}


🧑‍💻 Example Output

[20 15 10 5.2]
[7 15 10 5.2]
