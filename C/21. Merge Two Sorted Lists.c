struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2) {
  if (!list1 && !list2) return NULL;
  if (!list1) return list2;
  if (!list2) return list1;

  struct ListNode merged;
  struct ListNode *k = &merged;

  while (list1 && list2) {
    if (list1->val < list2->val) {
      k->next = list1;
      list1 = list1->next;
    } else {
      k->next = list2;
      list2 = list2->next;
    }
    k = k->next;
  }

  k->next = list1 ? list1 : list2;

  return merged.next;
}
