#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int val) : data(val), next(nullptr) {}
};
class solution{
    public:
    bool palindrome(node* head){
        node* slow=head;
        node* fast=head;
        while(fast!=nullptr and fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        node* prev=nullptr;
       while (slow!=nullptr) {
            node* temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        node*left=head;
        node* right=prev;
        while(right!=nullptr){
            if(left->data!=right->data){
                return false;
            }else{
                left=left->next;
                right=right->next;
            }
        }
        return true;


    }
};
node* buildList(initializer_list<int> vals) {
    node* head = nullptr;
    node* tail = nullptr;
    for (int v : vals) {
        node* pal = new node(v);
        if (!head) head = pal;
        else tail->next = pal;
        tail = pal;
    }
    return head;
}

int main() {
    solution sol;
    node* head = buildList({1, 2, 2, 1});
    cout << (sol.palindrome(head) ? "Palindrome" : "Not Palindrome") << endl;
    return 0;
}

