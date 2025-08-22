#include <bits/stdc++.h>
using namespace std;

// Node structure for doubly linked list
struct Node {
    int data;
    Node* next;
    Node* prev;
    
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// Doubly Linked List class
class DoublyLinkedList {
    Node* head;
    Node* tail;
    
public:
    DoublyLinkedList() { 
        head = NULL; 
        tail = NULL; 
    }
    
    // Insert at end
    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
            return;
        }
        
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    
    // Insert at beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = tail = newNode;
            return;
        }
        
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    
    // Insert at specific position
    void insertAtPosition(int val, int position) {
        if (position <= 0) {
            insertAtBeginning(val);
            return;
        }
        
        if (!head) {
            insert(val);
            return;
        }
        
        Node* temp = head;
        int count = 0;
        
        while (temp && count < position - 1) {
            temp = temp->next;
            count++;
        }
        
        if (!temp) {
            insert(val);
            return;
        }
        
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        newNode->prev = temp;
        
        if (temp->next) {
            temp->next->prev = newNode;
        } else {
            tail = newNode;
        }
        
        temp->next = newNode;
    }
    
    // Display list forward
    void displayForward() {
        Node* temp = head;
        cout << "Forward: ";
        while (temp) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    
    // Display list backward
    void displayBackward() {
        Node* temp = tail;
        cout << "Backward: ";
        while (temp) {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }
        cout << "NULL\n";
    }
    
    // Delete a node
    void remove(int val) {
        if (!head) return;
        
        // If head is to be deleted
        if (head->data == val) {
            Node* toDelete = head;
            head = head->next;
            if (head) head->prev = NULL;
            else tail = NULL;
            delete toDelete;
            return;
        }
        
        // If tail is to be deleted
        if (tail->data == val) {
            Node* toDelete = tail;
            tail = tail->prev;
            tail->next = NULL;
            delete toDelete;
            return;
        }
        
        // Find and delete other nodes
        Node* temp = head;
        while (temp && temp->data != val) {
            temp = temp->next;
        }
        
        if (temp) {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
        }
    }
    
    // Search for a value
    bool search(int val) {
        Node* temp = head;
        while (temp) {
            if (temp->data == val) return true;
            temp = temp->next;
        }
        return false;
    }
    
    // Count nodes
    int countNodes() {
        int count = 0;
        Node* temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }
        return count;
    }
    
    // Reverse the list
    void reverse() {
        if (!head || head == tail) return;
        
        Node* current = head;
        Node* temp = NULL;
        
        while (current) {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }
        
        temp = head;
        head = tail;
        tail = temp;
    }
    
    // Sort the list (bubble sort)
    void sort() {
        if (!head || head == tail) return;
        
        bool swapped;
        Node* ptr1;
        Node* lptr = NULL;
        
        do {
            swapped = false;
            ptr1 = head;
            
            while (ptr1->next != lptr) {
                if (ptr1->data > ptr1->next->data) {
                    swap(ptr1->data, ptr1->next->data);
                    swapped = true;
                }
                ptr1 = ptr1->next;
            }
            lptr = ptr1;
        } while (swapped);
    }
    
    // Remove duplicates
    void removeDuplicates() {
        if (!head) return;
        
        Node* current = head;
        while (current && current->next) {
            if (current->data == current->next->data) {
                Node* toDelete = current->next;
                current->next = toDelete->next;
                if (toDelete->next) {
                    toDelete->next->prev = current;
                } else {
                    tail = current;
                }
                delete toDelete;
            } else {
                current = current->next;
            }
        }
    }
    
    // Check if list is palindrome
    bool isPalindrome() {
        if (!head || head == tail) return true;
        
        Node* start = head;
        Node* end = tail;
        
        while (start != end && start->prev != end) {
            if (start->data != end->data) return false;
            start = start->next;
            end = end->prev;
        }
        return true;
    }
};

int main() {
    DoublyLinkedList list;
    
    cout << "=== Doubly Linked List Operations ===\n\n";
    
    // Insert elements
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    
    cout << "Initial list:\n";
    list.displayForward();
    list.displayBackward();
    cout << "Number of nodes: " << list.countNodes() << "\n\n";
    
    // Insert at beginning
    list.insertAtBeginning(5);
    cout << "After inserting 5 at beginning:\n";
    list.displayForward();
    
    // Insert at position
    list.insertAtPosition(25, 3);
    cout << "After inserting 25 at position 3:\n";
    list.displayForward();
    
    // Search
    cout << "Searching for 30: " << (list.search(30) ? "Found" : "Not found") << "\n";
    cout << "Searching for 100: " << (list.search(100) ? "Found" : "Not found") << "\n\n";
    
    // Delete a node
    list.remove(30);
    cout << "After deleting 30:\n";
    list.displayForward();
    
    // Sort the list
    list.sort();
    cout << "After sorting:\n";
    list.displayForward();
    
    // Check palindrome
    cout << "Is palindrome: " << (list.isPalindrome() ? "Yes" : "No") << "\n\n";
    
    // Reverse the list
    list.reverse();
    cout << "After reversing:\n";
    list.displayForward();
    
    return 0;
}
