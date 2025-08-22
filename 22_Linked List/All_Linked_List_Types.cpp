#include <bits/stdc++.h>
using namespace std;

// ==================== SINGLY LINKED LIST ====================
struct SinglyNode {
    int data;
    SinglyNode* next;
    
    SinglyNode(int val) {
        data = val;
        next = NULL;
    }
};

class SinglyLinkedList {
    SinglyNode* head;
    
public:
    SinglyLinkedList() { head = NULL; }
    
    void insert(int val) {
        SinglyNode* newNode = new SinglyNode(val);
        if (!head) {
            head = newNode;
            return;
        }
        SinglyNode* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
    
    void display() {
        SinglyNode* temp = head;
        cout << "Singly: ";
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    
    void clear() {
        while (head) {
            SinglyNode* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// ==================== CYCLIC LINKED LIST ====================
struct CyclicNode {
    int data;
    CyclicNode* next;
    
    CyclicNode(int val) {
        data = val;
        next = NULL;
    }
};

class CyclicLinkedList {
    CyclicNode* head;
    
public:
    CyclicLinkedList() { head = NULL; }
    
    void insert(int val) {
        CyclicNode* newNode = new CyclicNode(val);
        if (!head) {
            head = newNode;
            head->next = head;
            return;
        }
        
        CyclicNode* temp = head;
        while (temp->next != head) temp = temp->next;
        temp->next = newNode;
        newNode->next = head;
    }
    
    void display() {
        if (!head) {
            cout << "Cyclic: Empty\n";
            return;
        }
        
        CyclicNode* temp = head;
        int count = 0;
        cout << "Cyclic: ";
        
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
            count++;
            if (count > 15) {
                cout << "... (cycle)\n";
                return;
            }
        } while (temp != head);
        
        cout << "HEAD\n";
    }
    
    void clear() {
        if (!head) return;
        
        CyclicNode* temp = head->next;
        while (temp != head) {
            CyclicNode* toDelete = temp;
            temp = temp->next;
            delete toDelete;
        }
        delete head;
        head = NULL;
    }
};

// ==================== DOUBLY LINKED LIST ====================
struct DoublyNode {
    int data;
    DoublyNode* next;
    DoublyNode* prev;
    
    DoublyNode(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLinkedList {
    DoublyNode* head;
    DoublyNode* tail;
    
public:
    DoublyLinkedList() { 
        head = NULL; 
        tail = NULL; 
    }
    
    void insert(int val) {
        DoublyNode* newNode = new DoublyNode(val);
        if (!head) {
            head = tail = newNode;
            return;
        }
        
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    
    void display() {
        DoublyNode* temp = head;
        cout << "Doubly: ";
        while (temp) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    
    void clear() {
        while (head) {
            DoublyNode* temp = head;
            head = head->next;
            delete temp;
        }
        tail = NULL;
    }
};

// ==================== DOUBLY CYCLIC LINKED LIST ====================
struct DoublyCyclicNode {
    int data;
    DoublyCyclicNode* next;
    DoublyCyclicNode* prev;
    
    DoublyCyclicNode(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DoublyCyclicLinkedList {
    DoublyCyclicNode* head;
    
public:
    DoublyCyclicLinkedList() { head = NULL; }
    
    void insert(int val) {
        DoublyCyclicNode* newNode = new DoublyCyclicNode(val);
        if (!head) {
            head = newNode;
            head->next = head;
            head->prev = head;
            return;
        }
        
        DoublyCyclicNode* last = head->prev;
        newNode->next = head;
        newNode->prev = last;
        last->next = newNode;
        head->prev = newNode;
    }
    
    void display() {
        if (!head) {
            cout << "Doubly Cyclic: Empty\n";
            return;
        }
        
        DoublyCyclicNode* temp = head;
        int count = 0;
        cout << "Doubly Cyclic: ";
        
        do {
            cout << temp->data << " <-> ";
            temp = temp->next;
            count++;
            if (count > 15) {
                cout << "... (cycle)\n";
                return;
            }
        } while (temp != head);
        
        cout << "HEAD\n";
    }
    
    void clear() {
        if (!head) return;
        
        DoublyCyclicNode* temp = head->next;
        while (temp != head) {
            DoublyCyclicNode* toDelete = temp;
            temp = temp->next;
            delete toDelete;
        }
        delete head;
        head = NULL;
    }
};

// ==================== MAIN MENU SYSTEM ====================
void displayMenu() {
    cout << "\n=== LINKED LIST TYPES DEMONSTRATION ===\n";
    cout << "1. Singly Linked List\n";
    cout << "2. Cyclic Linked List\n";
    cout << "3. Doubly Linked List\n";
    cout << "4. Doubly Cyclic Linked List\n";
    cout << "5. Compare all types\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
}

void singlyLinkedListDemo() {
    cout << "\n--- SINGLY LINKED LIST DEMO ---\n";
    SinglyLinkedList list;
    
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    
    list.display();
    
    cout << "\nCharacteristics:\n";
    cout << "- Each node has data and next pointer\n";
    cout << "- Traversal only in forward direction\n";
    cout << "- Memory efficient\n";
    cout << "- Cannot traverse backwards\n";
}

void cyclicLinkedListDemo() {
    cout << "\n--- CYCLIC LINKED LIST DEMO ---\n";
    CyclicLinkedList list;
    
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    
    list.display();
    
    cout << "\nCharacteristics:\n";
    cout << "- Last node points to first node\n";
    cout << "- Infinite traversal possible\n";
    cout << "- Useful for circular operations\n";
    cout << "- Need cycle detection algorithms\n";
}

void doublyLinkedListDemo() {
    cout << "\n--- DOUBLY LINKED LIST DEMO ---\n";
    DoublyLinkedList list;
    
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    
    list.display();
    
    cout << "\nCharacteristics:\n";
    cout << "- Each node has data, next, and prev pointers\n";
    cout << "- Traversal in both directions\n";
    cout << "- More memory usage\n";
    cout << "- Easier deletion operations\n";
}

void doublyCyclicLinkedListDemo() {
    cout << "\n--- DOUBLY CYCLIC LINKED LIST DEMO ---\n";
    DoublyCyclicLinkedList list;
    
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    
    list.display();
    
    cout << "\nCharacteristics:\n";
    cout << "- Combines doubly and cyclic features\n";
    cout << "- Bidirectional infinite traversal\n";
    cout << "- Most complex structure\n";
    cout << "- Maximum flexibility\n";
}

void compareAllTypes() {
    cout << "\n--- COMPARISON OF ALL LINKED LIST TYPES ---\n";
    
    cout << "\n1. SINGLY LINKED LIST:\n";
    cout << "   - Memory: Low\n";
    cout << "   - Traversal: Forward only\n";
    cout << "   - Insertion: O(1) at end, O(n) at beginning\n";
    cout << "   - Deletion: O(n)\n";
    cout << "   - Use case: Simple sequential data\n";
    
    cout << "\n2. CYCLIC LINKED LIST:\n";
    cout << "   - Memory: Low\n";
    cout << "   - Traversal: Infinite forward\n";
    cout << "   - Insertion: O(1) at end, O(n) at beginning\n";
    cout << "   - Deletion: O(n)\n";
    cout << "   - Use case: Circular buffers, round-robin\n";
    
    cout << "\n3. DOUBLY LINKED LIST:\n";
    cout << "   - Memory: Medium\n";
    cout << "   - Traversal: Both directions\n";
    cout << "   - Insertion: O(1) at both ends, O(n) at position\n";
    cout << "   - Deletion: O(1) at ends, O(n) at position\n";
    cout << "   - Use case: Browser history, undo/redo\n";
    
    cout << "\n4. DOUBLY CYCLIC LINKED LIST:\n";
    cout << "   - Memory: Medium\n";
    cout << "   - Traversal: Infinite both directions\n";
    cout << "   - Insertion: O(1) at both ends, O(n) at position\n";
    cout << "   - Deletion: O(1) at ends, O(n) at position\n";
    cout << "   - Use case: Advanced circular operations\n";
}

int main() {
    int choice;
    
    do {
        displayMenu();
        cin >> choice;
        
        switch (choice) {
            case 1:
                singlyLinkedListDemo();
                break;
            case 2:
                cyclicLinkedListDemo();
                break;
            case 3:
                doublyLinkedListDemo();
                break;
            case 4:
                doublyCyclicLinkedListDemo();
                break;
            case 5:
                compareAllTypes();
                break;
            case 6:
                cout << "\nExiting program. Goodbye!\n";
                break;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
        
        if (choice != 6) {
            cout << "\nPress Enter to continue...";
            cin.ignore();
            cin.get();
        }
        
    } while (choice != 6);
    
    return 0;
}
