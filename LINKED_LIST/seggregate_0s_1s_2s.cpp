
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};


Node* segregate012(Node* head) {
    if (!head || !head->next) return head;

    Node* zeroDummy = new Node(0);
    Node* oneDummy = new Node(0);
    Node* twoDummy = new Node(0);

    Node* zeroTail = zeroDummy;
    Node* oneTail = oneDummy;
    Node* twoTail = twoDummy;

    Node* curr = head;
    while (curr) {
        if (curr->data == 0) {
            zeroTail->next = curr;
            zeroTail = zeroTail->next;
        } else if (curr->data == 1) {
            oneTail->next = curr;
            oneTail = oneTail->next;
        } else {
            twoTail->next = curr;
            twoTail = twoTail->next;
        }
        curr = curr->next;
    }

    // Connect lists
    zeroTail->next = (oneDummy->next) ? oneDummy->next : twoDummy->next;
    oneTail->next = twoDummy->next;
    twoTail->next = NULL;

    return zeroDummy->next;
}

// Utility function to print list
void printList(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Utility function to insert at end
void insert(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

int main() {
    Node* head = NULL;

    // Example input: 1 -> 2 -> 0 -> 1 -> 2 -> 0
    insert(head, 1);
    insert(head, 2);
    insert(head, 0);
    insert(head, 1);
    insert(head, 2);
    insert(head, 0);

    cout << "Original List: ";
    printList(head);

    head = segregate012(head);

    cout << "Segregated List: ";
    printList(head);

    return 0;
}