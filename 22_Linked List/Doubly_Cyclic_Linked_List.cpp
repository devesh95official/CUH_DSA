#include <bits/stdc++.h>
using namespace std;

// Node structure for doubly cyclic linked list
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

// Doubly Cyclic Linked List class
class DoublyCyclicLinkedList {
    Node* head;
    
public:
    DoublyCyclicLinkedList() { head = NULL; }
    
    // Insert at end (creates cycle)
    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            head->next = head;
            head->prev = head;
            return;
        }
        
        Node* last = head->prev;
        newNode->next = head;
        newNode->prev = last;
        last->next = newNode;
        head->prev = newNode;
    }
    
    // Insert at beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            head->next = head;
            head->prev = head;
            return;
        }
        
        Node* last = head->prev;
        newNode->next = head;
        newNode->prev = last;
        last->next = newNode;
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
        
        do {
            temp = temp->next;
            count++;
        } while (temp != head && count < position);
        
        if (temp == head) {
            insert(val);
            return;
        }
        
        Node* newNode = new Node(val);
        newNode->next = temp;
        newNode->prev = temp->prev;
        temp->prev->next = newNode;
        temp->prev = newNode;
    }
    
    // Display list forward
    void displayForward() {
        if (!head) {
            cout << "List is empty\n";
            return;
        }
        
        Node* temp = head;
        int count = 0;
        cout << "Forward: ";
        
        do {
            cout << temp->data << " <-> ";
            temp = temp->next;
            count++;
            if (count > 20) {
                cout << "... (cycle detected)\n";
                return;
            }
        } while (temp != head);
        
        cout << "HEAD\n";
    }
    
    // Display list backward
    void displayBackward() {
        if (!head) {
            cout << "List is empty\n";
            return;
        }
        
        Node* temp = head->prev;
        int count = 0;
        cout << "Backward: ";
        
        do {
            cout << temp->data << " <-> ";
            temp = temp->prev;
            count++;
            if (count > 20) {
                cout << "... (cycle detected)\n";
                return;
            }
        } while (temp != head->prev);
        
        cout << "TAIL\n";
    }
    
    // Check if list is cyclic
    bool isCyclic() {
        if (!head) return false;
        
        Node* slow = head;
        Node* fast = head;
        
        do {
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast) return true;
        } while (fast != head && fast->next != head);
        
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
            Node* toDelete = head;
            head->prev->next = head->next;
            head->next->prev = head->prev;
            head = head->next;
            delete toDelete;
            return;
        }
        
        // Find and delete other nodes
        Node* temp = head->next;
        while (temp != head) {
            if (temp->data == val) {
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                delete temp;
                return;
            }
            temp = temp->next;
        }
    }
    
    // Search for a value
    bool search(int val) {
        if (!head) return false;
        
        Node* temp = head;
        do {
            if (temp->data == val) return true;
            temp = temp->next;
        } while (temp != head);
        
        return false;
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
    
    // Reverse the list
    void reverse() {
        if (!head || head->next == head) return;
        
        Node* current = head;
        Node* temp = NULL;
        
        do {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        } while (current != head);
        
        head = head->next;
    }
    
    // Sort the list (bubble sort)
    void sort() {
        if (!head || head->next == head) return;
        
        bool swapped;
        Node* ptr1;
        Node* lptr = head->prev;
        
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
        do {
            Node* next = current->next;
            while (next != head) {
                if (current->data == next->data) {
                    next->prev->next = next->next;
                    next->next->prev = next->prev;
                    Node* toDelete = next;
                    next = next->next;
                    delete toDelete;
                } else {
                    next = next->next;
                }
            }
            current = current->next;
        } while (current != head);
    }
    
    // Check if list is palindrome
    bool isPalindrome() {
        if (!head || head->next == head) return true;
        
        Node* start = head;
        Node* end = head->prev;
        
        while (start != end && start->prev != end) {
            if (start->data != end->data) return false;
            start = start->next;
            end = end->prev;
        }
        return true;
    }
    
    // Split list into two halves
    void splitIntoTwo(DoublyCyclicLinkedList& first, DoublyCyclicLinkedList& second) {
        if (!head) return;
        
        Node* slow = head;
        Node* fast = head;
        
        do {
            slow = slow->next;
            fast = fast->next->next;
        } while (fast != head && fast->next != head);
        
        // Split at slow pointer
        Node* mid = slow;
        Node* last = head->prev;
        
        // First half
        first.head = head;
        first.head->prev = mid->prev;
        mid->prev->next = first.head;
        
        // Second half
        second.head = mid;
        second.head->prev = last;
        last->next = second.head;
    }
    
    // Merge two sorted lists
    static DoublyCyclicLinkedList merge(DoublyCyclicLinkedList& list1, DoublyCyclicLinkedList& list2) {
        DoublyCyclicLinkedList result;
        
        if (!list1.head) return list2;
        if (!list2.head) return list1;
        
        Node* temp1 = list1.head;
        Node* temp2 = list2.head;
        
        do {
            if (temp1->data <= temp2->data) {
                result.insert(temp1->data);
                temp1 = temp1->next;
            } else {
                result.insert(temp2->data);
                temp2 = temp2->next;
            }
        } while (temp1 != list1.head && temp2 != list2.head);
        
        // Add remaining elements
        while (temp1 != list1.head) {
            result.insert(temp1->data);
            temp1 = temp1->next;
        }
        
        while (temp2 != list2.head) {
            result.insert(temp2->data);
            temp2 = temp2->next;
        }
        
        return result;
    }
};

int main() {
    DoublyCyclicLinkedList list;
    
    cout << "=== Doubly Cyclic Linked List Operations ===\n\n";
    
    // Insert elements
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    
    cout << "Initial list:\n";
    list.displayForward();
    list.displayBackward();
    cout << "Number of nodes: " << list.countNodes() << "\n";
    cout << "Is cyclic: " << (list.isCyclic() ? "Yes" : "No") << "\n\n";
    
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
    
    // Find middle
    Node* middle = list.findMiddle();
    if (middle) {
        cout << "Middle element: " << middle->data << "\n\n";
    }
    
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
    
    // Split and merge demonstration
    DoublyCyclicLinkedList first, second;
    list.splitIntoTwo(first, second);
    
    cout << "After splitting:\n";
    cout << "First half: ";
    first.displayForward();
    cout << "Second half: ";
    second.displayForward();
    
    // Merge back
    DoublyCyclicLinkedList merged = DoublyCyclicLinkedList::merge(first, second);
    cout << "After merging:\n";
    merged.displayForward();
    
    return 0;
}
