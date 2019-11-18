/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/

typedef struct ListNode ListNode;
struct ListNode* removeElements(struct ListNode* head, int val)
{
	ListNode* cur = head;
	ListNode* newhead = (ListNode*)malloc(sizeof(ListNode));
	newhead->next = NULL;
	ListNode* tail = newhead;
	while (cur != NULL)
	{
		ListNode* next = cur->next;
		if (cur->val == val)
		{
			free(cur);
			cur = next;
		}
		else
		{
			tail->next = cur;
			tail = cur;
			tail->next = NULL;
			cur = next;
		}
	}
	ListNode* first = newhead->next;
	free(newhead);
	return first;
}
