#define _CRT_SECURE_NO_WARNINGS


/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/
typedef struct ListNode ListNode;
bool hasCycle(struct ListNode *head) {
	ListNode* fast = head;
	ListNode* slow = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return true;
		}
	}
	return false;
}