#include <bits/stdc++.h>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Head pointer (initially NULL)
Node* head = NULL;

// Insert node at end
void insert(int val) {
    Node* newNode = new Node(); // create node
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) { // first node
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = newNode;
}

// Display linked list
void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

// Delete node with given value
void remove(int val) {
    if (head == NULL) return;

    // If head node is to be deleted
    if (head->data == val) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL && temp->next->data != val) {
        temp = temp->next;
    }

    if (temp->next != NULL) {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);

    cout << "Linked List: ";
    display();

    remove(20);
    cout << "After deleting 20: ";
    display();

    return 0;
}
