#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL) {}
};

class CyclicLL {
    Node* head = NULL;
public:
    void insert(int x) {
        Node* newNode = new Node(x);
        if (!head) { head = newNode; head->next = head; return; }
        Node* temp = head;
        while (temp->next != head) temp = temp->next;
        temp->next = newNode;
        newNode->next = head;
    }
    
    void display() {
        if (!head) return;
        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << "HEAD\n";
    }
    
    void deleteNode(int x) {
        if (!head) return;
        if (head->data == x && head->next == head) { head = NULL; return; }
        if (head->data == x) {
            Node* temp = head;
            while (temp->next != head) temp = temp->next;
            temp->next = head->next;
            head = head->next;
            return;
        }
        Node* temp = head;
        while (temp->next != head && temp->next->data != x) temp = temp->next;
        if (temp->next != head) temp->next = temp->next->next;
    }
};

int main() {
    CyclicLL list;
    list.insert(10); list.insert(20); list.insert(30);
    cout << "Cyclic List: "; list.display();
    list.deleteNode(20);
    cout << "After delete: "; list.display();
    return 0;
}
