#include<bits\stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;

};
node* delete_middle(node* head){
    if (head == nullptr || head->next == nullptr) {
        return nullptr;
    }
    node* prev=nullptr;
    node* slow=head;
    node* fast=head;
    while(fast!=nullptr && fast->next!=nullptr){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
   prev->next=slow->next;
   return head;
}
void printList(node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
   
    node* head = new node{1, nullptr};
    head->next = new node{2, nullptr};
    head->next->next = new node{3, nullptr};
    head->next->next->next = new node{4, nullptr};
    head->next->next->next->next = new node{5, nullptr};

    cout << "Original list: ";
    printList(head);

    head = delete_middle(head);

    cout << "After deleting middle: ";
    printList(head);

    return 0;
}
