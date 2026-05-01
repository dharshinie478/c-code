#include <iostream>
using namespace std;

#define MAX 100

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() { top = -1; }

    void push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }
    // Time Complexity: O(1)

    void pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }
    // Time Complexity: O(1)

    int peek() {
        if (top < 0) return -1;
        return arr[top];
    }

    bool search(int key) {
        for (int i = 0; i <= top; i++) {
            if (arr[i] == key) return true;
        }
        return false;
    }
    // Time Complexity: O(n)

    void display() {
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }
};

// Driver
int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Search 20: " << (s.search(20) ? "Found" : "Not Found") << endl;

    s.pop();
    s.display();

    return 0;
}
