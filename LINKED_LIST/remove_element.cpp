#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int val):data(val),next(nullptr){};
};
class solution{
    public:
    node* remove_element(node* head,int val){
        node* dummy=new node(0);
        dummy->next=head;
        node* curr=dummy;
        while(curr->next!=nullptr){
        if(curr->next->data==val){
            node* temp=curr->next;
            curr->next=curr->next->next;
            delete temp;
        }
        else{
            curr=curr->next;
        }
    }
    node* newhead=dummy->next;
    delete dummy;
    return newhead;
    }
};
void printList(node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(6);
    head->next->next->next = new node(3);
    head->next->next->next->next = new node(6);

    cout << "Original list: ";
    printList(head);
    solution sol;

    head = sol.remove_element(head, 6);

    cout << "After removing 6: ";
    printList(head);

    return 0;
}
