/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {
public:
	ListNode* insertionSortList(ListNode* head) {
		if (head == NULL)
			return NULL;

		ListNode* newhead = new ListNode(0);
		newhead->next = NULL;
		ListNode* cur1 = head;

		//ListNode* start=newhead;
		if (newhead->next == NULL)
		{
			ListNode* newnode = new ListNode;
			newnode->val = cur1->val;
			newhead->next = newnode;
			newnode->next = NULL;
		}
		while (cur1->next != NULL)
		{
			cur1 = cur1->next;
			ListNode* cur2 = newhead->next;
			if (cur1->val <= cur2->val)
			{
				ListNode* newnode = new ListNode;
				newnode->val = cur1->val;
				newhead->next = newnode;
				newnode->next = cur2;
			}

			if (cur1->val > cur2->val && cur2->next != NULL)
			{
				ListNode* prev = newhead;
				while (cur2->next != NULL && cur2->val < cur1->val){
					cur2 = cur2->next;
					prev = prev->next;
				}
				if (cur2->val >= cur1->val){
					ListNode* newnode = new ListNode;
					newnode->val = cur1->val;
					prev->next = newnode;
					newnode->next = cur2;
				}
				else
				{
					ListNode* newnode = new ListNode;
					newnode->val = cur1->val;
					cur2->next = newnode;
					newnode->next = NULL;
				}
			}
			if (cur1->val > cur2->val && cur2->next == NULL)
			{
				ListNode* newnode = new ListNode;
				newnode->val = cur1->val;
				cur2->next = newnode;
				newnode->next = NULL;
			}
		}
		return newhead->next;
		free(newhead);
	}
};