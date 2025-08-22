#include <bits/stdc++.h>
using namespace std;

// Node structure for cyclic linked list
struct Node {
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Cyclic Linked List class
class CyclicLinkedList {
    Node* head;
    
public:
    CyclicLinkedList() { head = NULL; }
    
    // Insert at end (creates cycle)
    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            head->next = head; // Point to itself
            return;
        }
        
        Node* temp = head;
        while (temp->next != head) temp = temp->next;
        temp->next = newNode;
        newNode->next = head; // Complete the cycle
    }
    
    // Insert at beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            head->next = head;
            return;
        }
        
        Node* temp = head;
        while (temp->next != head) temp = temp->next;
        
        newNode->next = head;
        head = newNode;
        temp->next = head; // Update last node's next pointer
    }
    
    // Display list (with cycle detection)
    void display() {
        if (!head) {
            cout << "List is empty\n";
            return;
        }
        
        Node* temp = head;
        int count = 0;
        cout << "Cyclic List: ";
        
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
            count++;
            if (count > 20) { // Prevent infinite loop
                cout << "... (cycle detected)\n";
                return;
            }
        } while (temp != head);
        
        cout << "HEAD\n";
    }
    
    // Check if list is cyclic
    bool isCyclic() {
        if (!head) return false;
        
        Node* slow = head;
        Node* fast = head;
        
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast) return true;
        }
        return false;
    }
    
    // Count nodes in cycle
    int countNodes() {
        if (!head) return 0;
        
        Node* temp = head;
        int count = 0;
        
        do {
            count++;
            temp = temp->next;
        } while (temp != head);
        
        return count;
    }
    
    // Delete a node
    void remove(int val) {
        if (!head) return;
        
        // If only one node
        if (head->next == head) {
            if (head->data == val) {
                delete head;
                head = NULL;
            }
            return;
        }
        
        // If head is to be deleted
        if (head->data == val) {
            Node* temp = head;
            while (temp->next != head) temp = temp->next;
            
            temp->next = head->next;
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }
        
        // Find and delete other nodes
        Node* temp = head;
        while (temp->next != head && temp->next->data != val) {
            temp = temp->next;
        }
        
        if (temp->next != head) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
    }
    
    // Find middle node
    Node* findMiddle() {
        if (!head) return NULL;
        if (head->next == head) return head;
        
        Node* slow = head;
        Node* fast = head;
        
        do {
            slow = slow->next;
            fast = fast->next->next;
        } while (fast != head && fast->next != head);
        
        return slow;
    }
    
    // Reverse the cyclic list
    void reverse() {
        if (!head || head->next == head) return;
        
        Node *prev = NULL, *current = head, *next;
        
        do {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        } while (current != head);
        
        head->next = prev;
        head = prev;
    }
};

int main() {
    CyclicLinkedList list;
    
    cout << "=== Cyclic Linked List Operations ===\n\n";
    
    // Insert elements
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    
    cout << "Initial list:\n";
    list.display();
    cout << "Number of nodes: " << list.countNodes() << "\n";
    cout << "Is cyclic: " << (list.isCyclic() ? "Yes" : "No") << "\n\n";
    
    // Insert at beginning
    list.insertAtBeginning(5);
    cout << "After inserting 5 at beginning:\n";
    list.display();
    
    // Find middle
    Node* middle = list.findMiddle();
    if (middle) {
        cout << "Middle element: " << middle->data << "\n\n";
    }
    
    // Delete a node
    list.remove(30);
    cout << "After deleting 30:\n";
    list.display();
    
    // Reverse the list
    list.reverse();
    cout << "After reversing:\n";
    list.display();
    
    return 0;
}
