#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL) {}
};

class SinglyLL {
    Node* head = NULL;
public:
    void insert(int x) {
        Node* newNode = new Node(x);
        if (!head) { head = newNode; return; }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
    
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    
    void deleteNode(int x) {
        if (!head) return;
        if (head->data == x) { head = head->next; return; }
        Node* temp = head;
        while (temp->next && temp->next->data != x) temp = temp->next;
        if (temp->next) temp->next = temp->next->next;
    }
};

int main() {
    SinglyLL list;
    list.insert(10); list.insert(20); list.insert(30);
    cout << "List: "; list.display();
    list.deleteNode(20);
    cout << "After delete: "; list.display();
    return 0;
}
