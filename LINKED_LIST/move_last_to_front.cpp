#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

void moveLastToFront(Node*& head) {
    if (head == NULL || head->next == NULL) return;

    Node* secondLast = head;
    while (secondLast->next->next != NULL) {
        secondLast = secondLast->next;
    }

    Node* last = secondLast->next;
    secondLast->next = NULL;
    last->next = head;
    head = last;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Original list: ";
    printList(head);

    moveLastToFront(head);

    cout << "After moving last to front: ";
    printList(head);

    return 0;
}