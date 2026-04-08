#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
class solution{
public:
    node* remove_duplicates(node* head){
        node* curr=head;
        while(curr!=NULL&& curr->next!=NULL){
            if(curr->data==curr->next->data){
                curr->next=curr->next->next;
            }
            else{
            curr=curr->next;
            }
        }
        return head;
    }
};
void print_list(node* head){
    while(head!=NULL){
        cout<<head->data<<"-> ";
        head=head->next;
    }
}
int main() {
    node* head = new node{1, nullptr};
    head->next = new node{1, nullptr};
    head->next->next = new node{2, nullptr};
    head->next->next->next = new node{3, nullptr};
    head->next->next->next->next = new node{3, nullptr};
    head->next->next->next->next->next = new node{4, nullptr};

    cout << "Original list: ";
    print_list(head);
    cout << endl;

    solution s;
    head = s.remove_duplicates(head);

    cout << "List after removing duplicates: ";
    print_list(head);
    cout << endl;

    return 0;
}
