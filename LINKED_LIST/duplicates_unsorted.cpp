#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
    node(int val) : data(val), next(NULL) {}
};

class solution {
public:
    node* remove_unsorted(node* head) {
        if (head == NULL) return head;
        unordered_set<int> st;
        node* curr = head;
        node* prev = NULL;

        while (curr != NULL) {
            if (st.find(curr->data) != st.end()) {
                prev->next = curr->next;
                delete curr;
                curr = prev->next;   
            } else {
                st.insert(curr->data);
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};

void print_list(node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    node* head = new node(10);
    head->next = new node(20);
    head->next->next = new node(10);
    head->next->next->next = new node(30);
    head->next->next->next->next = new node(20);

    cout << "Original list: ";
    print_list(head);

    solution s;
    head = s.remove_unsorted(head);

    cout << "List after removing duplicates: ";
    print_list(head);

    return 0;
}