#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x) : data(x), next(NULL) {}

};
class solution{
    public:
    node* merge_list(node* m1,node* m2){
        node* l1=m1;
        node* l2=m2;
        node dummy(0);
        node* curr=&dummy;
        while(l1!=nullptr && l2!=nullptr){
            if(l1->data<l2->data){
                curr->next=l1;
                l1=l1->next;
            }
            else{
                curr->next=l2;
                l2=l2->next;
            }
            curr=curr->next;
        }
        if(l1!=nullptr) curr->next=l1;
        else curr->next=l2;
        return dummy.next;
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


node* createList(int arr[], int n) {
    if (n == 0) return NULL;
    node* head = new node(arr[0]);
    node* current = head;
    for (int i = 1; i < n; i++) {
        current->next = new node(arr[i]);
        current = current->next;
    }
    return head;
}

int main() {
    
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};

    node* l1 = createList(arr1, 3);
    node* l2 = createList(arr2, 3);

    cout << "List 1: ";
    printList(l1);
    cout << "List 2: ";
    printList(l2);
    solution sol;

    
    node* merged =sol. merge_list(l1, l2);

    cout << "Merged List: ";
    printList(merged);

    return 0;
}

