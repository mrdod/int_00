#include "stdio.h"
#include "swap_pairs.h"

static ListNode_t *remove_next_element(ListNode_t *curr);

static void add_element(ListNode_t *removed_node, ListNode_t *curr);


ListNode_t *swapPairs(ListNode_t *head) {
    ListNode_t dummy = {0, head};
    ListNode_t *curr = &dummy;

    // Swap as long as we have two nodes to swap
    while (curr->next != NULL && curr->next->next != NULL) {

        // Remove Element
        ListNode_t *removed_node = remove_next_element(curr);

        // Increment List
        curr = curr->next;

        // Add element
        add_element(removed_node, curr);

        // Increment List
        curr = curr->next;
    }

    return dummy.next;
}

static ListNode_t *remove_next_element(ListNode_t *curr) {
    ListNode_t *remove = curr->next;
    ListNode_t *last = curr->next->next;

    curr->next = last;

    return remove;
}

static void add_element(ListNode_t *removed_node, ListNode_t *curr) {
    ListNode_t *last = curr->next;
    curr->next = removed_node;
    removed_node->next = last;
}


