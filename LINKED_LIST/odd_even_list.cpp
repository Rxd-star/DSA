#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
 node(int val):data(val),next(nullptr){};
};
class solution{
    public:
    node* seggregate_odd_even(node* head){
        if(!head || !head->next|| !head->next->next) return head;
        node* odd =head;
        node* even=head->next;
        node* even_start=head->next;
        while(odd->next!=nullptr && even->next!=nullptr){
            odd->next=even->next;
            even->next=odd->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=even_start;
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
int main(){
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);

    cout << "Original list: ";
    printlist(head);

    solution sol;
    head = sol.seggregate_odd_even(head);

    cout << "Odd-Even rearranged list: ";
    printlist(head);

    return 0;

}