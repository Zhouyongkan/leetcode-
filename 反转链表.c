/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/

typedef struct ListNode ListNode;
struct ListNode* reverseList(struct ListNode* head)
{
	ListNode* cur = head;
	ListNode* newhead = (ListNode*)malloc(sizeof(ListNode));
	newhead = NULL;
	if (cur == NULL || cur->next == NULL)
	{
		return head;
	}
	else
	{
		while (cur != NULL)
		{
			ListNode* next = cur->next;
			cur->next = newhead;
			newhead = cur;
			cur = next;
		}
	}

	return newhead;
}