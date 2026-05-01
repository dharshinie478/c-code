#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Insert at end
void insert(Node*& head, int value) {
    Node* newNode = new Node{value, NULL};

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
// Time Complexity: O(n)

// Delete a value
void deleteNode(Node*& head, int value) {
    if (head == NULL) return;

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL && temp->next->data != value) {
        temp = temp->next;
    }

    if (temp->next != NULL) {
        Node* del = temp->next;
        temp->next = del->next;
        delete del;
    }
}
// Time Complexity: O(n)

// Search
bool search(Node* head, int key) {
    while (head != NULL) {
        if (head->data == key) return true;
        head = head->next;
    }
    return false;
}
// Time Complexity: O(n)

// Display
void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Driver
int main() {
    Node* head = NULL;

    insert(head, 10);
    insert(head, 20);
    insert(head, 30);

    display(head);

    cout << "Search 20: " << (search(head, 20) ? "Found" : "Not Found") << endl;

    deleteNode(head, 20);
    display(head);

    return 0;
}
✅ 2. Stack Imp
