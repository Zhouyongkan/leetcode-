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
	ListNode* swapPairs(ListNode* head) {
		if (head == nullptr)
		{
			return head;
		}
		ListNode* newhead = new ListNode(0);
		newhead->next = head;
		ListNode* pre = newhead;
		while (head != nullptr && head->next != nullptr)
		{
			ListNode* cur = head;
			ListNode* next = head->next;
			pre->next = next;
			cur->next = next->next;
			next->next = cur;


			pre = cur;
			head = cur->next;
		}
		return newhead->next;
	}
};