#include "stdio.h"
#include "swap_pairs.h"

int main() {

    /* Singly linked list swap elements https://leetcode.com/problems/swap-nodes-in-pairs/ */
    ListNode_t node_05 = {16, NULL};
    ListNode_t node_04 = {17, &node_05};
    ListNode_t node_03 = {18, &node_04};
    ListNode_t node_02 = {19, &node_03};
    ListNode_t node_01 = {20, &node_02};

    /* Call swap pairs */
    ListNode_t *ret_val = swapPairs(&node_01);

    /* Print output */
    while (ret_val != NULL) {
        printf("Val: %d\n", ret_val->val);
        ret_val = ret_val->next;
    }
}

