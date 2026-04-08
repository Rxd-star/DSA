#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int val):data(val),next(nullptr){};
};
class solution{
    public:
    node* partition_list(node* head,int n){
        if(!head || !head->next) return head;
        node lessdummy(0);
        node greatdummy(0);
        node* less=&lessdummy;
        node* greater=&greatdummy;
        while(head!=nullptr){
            if(head->data<=n){
                less->next=head;
                less=less->next;
            }
            else{
                greater->next=head;
                greater=greater->next;
            }
            head=head->next;
        }
        greater->next=nullptr;
        less->next=greatdummy.next;
        return lessdummy.next;
        

    }

};
void printList(node* head) {
    while (head) {
        cout << head->data;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Build linked list: 1 -> 4 -> 3 -> 2 -> 5 -> 2
    node* head = new node(1);
    head->next = new node(4);
    head->next->next = new node(3);
    head->next->next->next = new node(2);
    head->next->next->next->next = new node(5);
    head->next->next->next->next->next = new node(2);

    cout << "Original list: ";
    printList(head);

    solution sol;
    head = sol.partition_list(head, 3);

    cout << "Partitioned list (x=3): ";
    printList(head);

    return 0;
}
