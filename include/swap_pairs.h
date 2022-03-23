/* Singly linked list node type definition */
typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode_t;

/* Swap pairs function prototype */
ListNode_t *swapPairs(ListNode_t *head);
