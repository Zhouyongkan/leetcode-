/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/
typedef struct ListNode ListNode;
struct ListNode *detectCycle(struct ListNode *head) {
	ListNode* fast = head;
	ListNode* slow = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			ListNode* start = head;
			ListNode* meet = slow;
			while (start != meet)
			{
				start = start->next;
				meet = meet->next;
			}
			return meet;
		}
	}
	return NULL;
}