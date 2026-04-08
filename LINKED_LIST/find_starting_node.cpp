#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int val):data(val),next(nullptr){};

};
class solution{
    public:
    node* starting_nde(node* head){
        node* slow=head;
        node* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                break;
            }
        }
        if(!fast || !fast->next) return nullptr;
        slow=head;
        while(slow!=fast){
        slow=slow->next;
        fast=fast->next;  
        
    }
    return slow;
    }
};
int main() {
   
    node* head = new node(3);
    head->next = new node(2);
    head->next->next = new node(0);
    head->next->next->next = new node(-4);

    // Create cycle: tail connects to node with value 2
    head->next->next->next->next = head->next;
    solution sol;

    node* cycleStart = sol.starting_nde(head);
    if (cycleStart!=nullptr) {
        cout << "Cycle starts at node with value: " << cycleStart->data << endl;
    } else {
        cout << "No cycle detected." << endl;
    }

    return 0;
}

