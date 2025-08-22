#include <bits/stdc++.h>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Linked List class
class LinkedList {
    Node* head;
    
public:
    LinkedList() { head = NULL; }
    
    // Insert at end
    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
    
    // Display list
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    
    // Delete a node
    void remove(int val) {
        if (!head) return;
        
        if (head->data == val) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }
        
        Node* temp = head;
        while (temp->next && temp->next->data != val) 
            temp = temp->next;
        
        if (temp->next) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
    }
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    
    cout << "Linked List: ";
    list.display();
    
    list.remove(20);
    cout << "After deleting 20: ";
    list.display();
    
    return 0;
}
