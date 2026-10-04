#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

int main() {
    struct ListNode a, b, c;
    a.val = 1;
    b.val = 2;
    c.val = 3;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    struct ListNode *prev = NULL;
    struct ListNode *current = &a;

    while (current != NULL) {
        struct ListNode *next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    while (prev != NULL) {
        printf("%d ", prev->val);
        prev = prev->next;
    }

    return 0;
}