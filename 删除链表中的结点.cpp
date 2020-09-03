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
	void deleteNode(ListNode* node) {
		if (node != NULL && node->next != NULL){//node的next如果不为空
			node->val = node->next->val;//把node下个结点值赋给node(覆盖)
			node->next = node->next->next;//因为赋值后当前node结点和下一个结点值一样,将后面结点删除。
		}
	}
};