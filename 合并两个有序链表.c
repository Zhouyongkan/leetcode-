#define _CRT_SECURE_NO_WARNINGS

/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/

typedef struct ListNode ListNode;
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
	if (l1 == NULL)
		return l2;
	else if (l2 == NULL)
		return l1;
	ListNode* newhead = NULL, *tail = NULL;
	while (l1 && l2)
	{
		if (l1->val < l2->val)
		{
			if (tail == NULL)
			{
				newhead = tail = l1;
			}
			else
			{
				tail->next = l1;
				tail = tail->next;
			}
			l1 = l1->next;
		}
		else
		{
			if (tail == NULL)
				newhead = tail = l2;
			else
			{
				tail->next = l2;
				tail = tail->next;
			}
			l2 = l2->next;
		}
	}
	if (l1)
	{
		tail->next = l1;
	}
	else
	{
		tail->next = l2;
	}
	return newhead;
}