#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
    node(int val) : data(val), next(NULL) {}
};

class solution {
public:
node* intersection(node* head1,node*head2){
    node* p1=head1;
    node* p2=head2;
    while(p1!=p2){
        p1=(p1==nullptr)?head2:p1->next;
            p2=(p2==nullptr)?head1:p2->next;
        }
        return p1;
}
};
int main() {
    
    node *common = new node(8);
    common->next = new node(10);
    common->next->next = new node(12);

    
    node *headA = new node(3);
    headA->next = new node(7);
    headA->next->next = common;

    
    node *headB = new node(99);
    headB->next = new node(1);
    headB->next->next = common;

    solution sol;
    node* intersectionnode = sol.intersection(headA, headB);

    if (intersectionnode)
        cout << "Intersection node found at value: " << intersectionnode->data << endl;
    else
        cout << "No intersection found." << endl;

    return 0;
}
