#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;             
    ListNode* next;       
    ListNode(int x) : val(x), next(nullptr) {}
};
class solution{
    public:
vector<ListNode*> splitListToParts(ListNode* head, int k) {
    vector<ListNode*> result(k, nullptr);

    // Step 1: Count length using while loop
    int n = 0;
    ListNode* curr = head;
    while (curr != nullptr) {
        n++;
        curr = curr->next;
    }

    // Step 2: Compute base size and extra nodes
    int partSize = n / k;
    int extra = n % k;

    // Step 3: Split into parts
    curr = head;
    for (int i = 0; i < k && curr != nullptr; i++) {
        result[i] = curr;
        int size = partSize + (extra > 0 ? 1 : 0);
        if (extra > 0) extra--;

        // Move size-1 steps forward
        for (int j = 1; j < size; j++) {
            curr = curr->next;
        }

        // Break the link
        ListNode* next = curr->next;
        curr->next = nullptr;
        curr = next;
    }

    return result;
}
};
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Build linked list: 1 → 2 → 3 → 4 → 5 → 6 → 7
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);
    head->next->next->next->next->next->next = new ListNode(7);

    int k = 3;
    solution sol;
    vector<ListNode*> parts =sol. splitListToParts(head, k);

    // Print each part
    for (int i = 0; i < k; i++) {
        cout << "Part " << i+1 << ": ";
        printList(parts[i]);
    }

    return 0;
}
