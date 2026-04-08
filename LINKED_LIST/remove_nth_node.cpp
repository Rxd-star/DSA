#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
class Solution{
 public:
    node* remove_nth(node* head, int n){
        node* fast=head;
        node* slow=head;
        for(int i=0;i<=n;i++){
            if(fast==nullptr) return head;
            fast=fast->next;
        }
        while(fast!=nullptr){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};
void printlist(node* head){
    while(head!=nullptr){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
    
}
int main() {
  
    node* head = new node{1, nullptr};
    head->next = new node{2, nullptr};
    head->next->next = new node{3, nullptr};
    head->next->next->next = new node{4, nullptr};
    head->next->next->next->next = new node{5, nullptr};

    cout << "Original list: ";
    printlist(head);
    Solution sol;

    head = sol.remove_nth(head, 2); 

    cout << "After removing 2nd node from end: ";
    printlist(head);

    return 0;
}
