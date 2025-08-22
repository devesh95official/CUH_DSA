#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next, *prev;
    Node(int x) : data(x), next(NULL), prev(NULL) {}
};

class DoublyLL {
    Node* head = NULL, *tail = NULL;
public:
    void insert(int x) {
        Node* newNode = new Node(x);
        if (!head) { head = tail = newNode; return; }
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    
    void deleteNode(int x) {
        if (!head) return;
        if (head->data == x) { head = head->next; if(head)head->prev=NULL; return; }
        if (tail->data == x) { tail = tail->prev; tail->next=NULL; return; }
        Node* temp = head;
        while (temp && temp->data != x) temp = temp->next;
        if (temp) {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
        }
    }
};

int main() {
    DoublyLL list;
    list.insert(10); list.insert(20); list.insert(30);
    cout << "Doubly List: "; list.display();
    list.deleteNode(20);
    cout << "After delete: "; list.display();
    return 0;
}
