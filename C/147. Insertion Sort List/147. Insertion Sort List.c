#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};


struct ListNode* insertionSortList(struct ListNode* head) {
    if (head == NULL) {
        return NULL;
    }

    struct ListNode *dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode *last_sorted = head;
    struct ListNode *current = head->next;

    while (current != NULL) {
        if (last_sorted->val <= current->val) {
            last_sorted = last_sorted->next;
        } else {
            struct ListNode *prev = dummy;
            while (prev->next->val <= current->val) {
                prev = prev->next;
            }

            last_sorted->next = current->next;
            current->next = prev->next;
            prev->next = current;
        }

        current = last_sorted->next;
    }

    return dummy->next;
}