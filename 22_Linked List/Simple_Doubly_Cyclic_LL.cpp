#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next, *prev;
    Node(int x) : data(x), next(NULL), prev(NULL) {}
};

class DoublyCyclicLL {
    Node* head = NULL;
public:
    void insert(int x) {
        Node* newNode = new Node(x);
        if (!head) { head = newNode; head->next = head->prev = head; return; }
        Node* last = head->prev;
        newNode->next = head;
        newNode->prev = last;
        last->next = newNode;
        head->prev = newNode;
    }
    
    void display() {
        if (!head) return;
        Node* temp = head;
        do {
            cout << temp->data << " <-> ";
            temp = temp->next;
        } while (temp != head);
        cout << "HEAD\n";
    }
    
    void deleteNode(int x) {
        if (!head) return;
        if (head->data == x && head->next == head) { head = NULL; return; }
        if (head->data == x) {
            head->prev->next = head->next;
            head->next->prev = head->prev;
            head = head->next;
            return;
        }
        Node* temp = head->next;
        while (temp != head && temp->data != x) temp = temp->next;
        if (temp != head) {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
        }
    }
};

int main() {
    DoublyCyclicLL list;
    list.insert(10); list.insert(20); list.insert(30);
    cout << "Doubly Cyclic List: "; list.display();
    list.deleteNode(20);
    cout << "After delete: "; list.display();
    return 0;
}
