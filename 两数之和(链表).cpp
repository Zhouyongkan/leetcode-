class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

		ListNode* cur1 = l1;
		ListNode* cur2 = l2;
		ListNode* head = (ListNode*)malloc(sizeof(ListNode));
		ListNode* cur = head;
		ListNode* del = head;
		int flag = 0;
		while (cur1 != NULL && cur2 != NULL)
		{
			int sum = 0;
			sum = cur1->val + cur2->val + flag;
			if (sum>9)
			{
				sum -= 10;
				flag = 1;
			}
			else
			{
				flag = 0;
			}
			ListNode* node = new ListNode(sum);
			cur->next = node;
			cur = node;
			cur1 = cur1->next;
			cur2 = cur2->next;
		}
		if (cur1 != NULL)
		{
			while (cur1 != NULL)
			{
				if (flag != 0)
				{
					int sum = cur1->val + flag;
					ListNode* node = new ListNode(sum % 10);
					cur->next = node;
					cur = node;
					cur1 = cur1->next;
					if (sum >= 10)
					{
						flag = 1;
					}
					else
						flag = 0;
				}
				else
				{
					ListNode* node = new ListNode(cur1->val);
					cur->next = node;
					cur = node;
					cur1 = cur1->next;
				}
			}
		}
		else
		{
			while (cur2 != NULL)
			{
				if (flag != 0)
				{
					int sum = cur2->val + flag;
					ListNode* node = new ListNode(sum % 10);
					cur->next = node;
					cur = node;
					cur2 = cur2->next;
					if (sum >= 10)
					{
						flag = 1;
					}
					else
						flag = 0;
				}
				else
				{
					ListNode* node = new ListNode(cur2->val);
					cur->next = node;
					cur = node;
					cur2 = cur2->next;
				}
			}
		}
		if (flag != 0)
		{
			ListNode* node = new ListNode(flag);
			cur->next = node;
			cur = node;
		}
		cur->next = NULL;
		head = head->next;
		free(del);
		free(cur1);
		free(cur2);
		return head;
	}
};