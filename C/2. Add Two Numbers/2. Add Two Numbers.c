#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode *current = (struct ListNode*)malloc(sizeof(struct ListNode));
    current = head;
    
    int l1_val = 0;
    int l2_val = 0;
    int carry = 0;

    while (l1 || l2 || carry)
    {
        struct ListNode *temp = (struct ListNode*)malloc(sizeof(struct ListNode));

        if (l1) {
            l1_val = l1->val;
            l1 = l1->next;
        } else {
            l1_val = 0;
            l1 = NULL;
        }

        if (l2) {
            l2_val = l2->val;
            l2 = l2->next;
        } else {
            l2_val = 0;
            l2 = NULL;
        }

        int sum = l1_val + l2_val + carry;
        carry = sum / 10;

        temp->val = sum % 10;
        temp->next = NULL;

        if (head->next == NULL) {
            head->next = temp;
        } 
        
        else {
            while (current->next != NULL)
                current = current->next;

            current->next = temp;
        }
    }
    head = head->next;

    return head;
}