class Solution {
public:
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
	{
		ListNode* newhead = (ListNode*)malloc(sizeof(ListNode));
		ListNode* cur = newhead;
		ListNode* del = newhead;
		while (pHead1 && pHead2)
		{
			if (pHead1->val <= pHead2->val)
			{
				ListNode* node = new ListNode(pHead1->val);
				cur->next = node;
				cur = node;
				pHead1 = pHead1->next;
			}
			else
			{
				ListNode* node = new ListNode(pHead2->val);
				cur->next = node;
				cur = node;
				pHead2 = pHead2->next;
			}
		}
		if (pHead1)
		{
			cur->next = pHead1;
		}
		else
		{
			cur->next = pHead2;
		}
		newhead = newhead->next;
		free(del);
		return newhead;
	}
};