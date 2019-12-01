/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/
typedef struct ListNode Node;
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
	Node* curA = headA;
	Node* curB = headB;
	int lenA = 0, len B = 0;
	while (curA)
	{
		lenA++;
		curA = curA->next;
	}
	while (curB)
	{
		lenB++;
		curB = curB->next;
	}
	Node* max = headA, *min = headB;
	if (lenB>lenA)
	{
		max = headB;
		min = headA;
	}
	int gap = abs(lenA - lenB);
	while (gap--)
	{
		max = max->next;
	}
	while (max != min)
	{
		max = max->next;
		min = min->next;
	}
	return max;
}
