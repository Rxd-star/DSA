#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int val):data(val),next(nullptr){};

};
    node* delete_alternates(node* head){
        node* prev=head;
        node* node=head->next;
        while(prev!=nullptr && node!=nullptr){
            prev->next=node->next;
            delete node;
            prev=prev->next;
            if (prev!=nullptr) node=prev->next;
        }
        return head;
    }
void printlist(node* head){
 while(head!=nullptr){
    cout<<head->data<<"->";
    head=head->next;
 }
 cout<<"NULL"<<endl;
}
int main(){
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(40);
    head->next->next->next->next = new node(50);
    head->next->next->next->next->next = new node(60);

    cout << "Original List: ";
    printlist(head);

    delete_alternates(head);

    cout << "After deleting alternate nodes: ";
    printlist(head);

    return 0;
}