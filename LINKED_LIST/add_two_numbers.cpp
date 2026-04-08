#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node() : data(0), next(nullptr) {}
    node(int val) : data(val), next(nullptr) {}
};
class solution{
    public:
    node* add(node* l1,node*l2){
        node* dummy=new node();
        node* res=dummy;
        int total=0,carry=0;
        while(l1!=nullptr || l2!=nullptr || carry!=0 ){
            total=carry;
            if(l1!=nullptr){
                total+=l1->data;
                l1=l1->next;
            }
            if(l2!=nullptr){
                total+=l2->data;
                l2=l2->next;
            }
            int num=total%10;
            carry=total/10;
            dummy->next=new node(num);
            dummy=dummy->next;
        }
        node* result=res->next;
        delete res;
        return result;

    }
};
void printList(node* head) {
    while(head) {
        cout << head->data;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
};

int main() {
    
    node* l1 = new node(2);
    l1->next = new node(4);
    l1->next->next = new node(3);

    
    node* l2 = new node(5);
    l2->next = new node(6);
    l2->next->next = new node(4);

    cout << "First number: ";
    printList(l1);
    cout << "Second number: ";
    printList(l2);

    solution sol;
    node* result = sol.add(l1, l2);

    cout << "Sum: ";
    printList(result);

    return 0;
}
