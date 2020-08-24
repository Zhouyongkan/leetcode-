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
	ListNode* removeDuplicateNodes(ListNode* head) {
		if (head == NULL)
			return NULL;

		unordered_set<int> us;
		us.insert(head->val);
		ListNode* pre = head;
		ListNode* newhead = head;
		while (pre->next != NULL)
		{
			ListNode* cur = pre->next;
			if (!(us.count(cur->val))){
				us.insert(cur->val);
				pre = pre->next;
			}
			else{
				pre->next = pre->next->next;
			}
		}
		return newhead;
	}
};