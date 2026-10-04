#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

int main() {
    struct ListNode a1 = {1, NULL};
    struct ListNode a2 = {2, NULL};
    struct ListNode a3 = {4, NULL};

    struct ListNode b1 = {1, NULL};
    struct ListNode b2 = {3, NULL};
    struct ListNode b3 = {4, NULL};

    a1.next = &a2;
    a2.next = &a3;

    b1.next = &b2;
    b2.next = &b3;

    struct ListNode dummy = {0, NULL};
    struct ListNode *tail = &dummy;
    struct ListNode *l1 = &a1;
    struct ListNode *l2 = &b1;

    while (l1 != NULL && l2 != NULL) {
        if (l1->val <= l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    if (l1 != NULL)
        tail->next = l1;
    else
        tail->next = l2;

    struct ListNode *current = dummy.next;

    while (current != NULL) {
        printf("%d ", current->val);
        current = current->next;
    }

    return 0;
}