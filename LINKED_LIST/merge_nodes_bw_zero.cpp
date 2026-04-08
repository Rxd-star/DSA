#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int val):data(val),next(nullptr){};
};
node* merge_nodes(node* head){
    node* dummy=new node(0);
    node* list=dummy;
    node* curr=head->next;
    int sum=0;
    while(curr!=nullptr){
        if(curr->data==0){
            if(sum>0){
                list->next=new node(sum);
                list=list->next;
                sum=0;
            }
            
        }
        else{
                sum+=curr->data;
            }
        curr=curr->next;
    }
    return dummy->next;
}
void printList(node* head) {
    while (head) {
        cout << head->data << "-> ";
        
        head = head->next;
    }
    cout << endl;
}

int main() {
    
    node* head = new node(0);
    head->next = new node(3);
    head->next->next = new node(1);
    head->next->next->next = new node(0);
    head->next->next->next->next = new node(4);
    head->next->next->next->next->next = new node(5);
    head->next->next->next->next->next->next = new node(2);
    head->next->next->next->next->next->next->next = new node(0);

    
    node* result = merge_nodes(head);

    
    cout << "Merged list: ";
    printList(result);

    return 0;
}
