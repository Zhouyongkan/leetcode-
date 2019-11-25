#define _CRT_SECURE_NO_WARNINGS
/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};*/
class Solution {
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k){
		ListNode* fast = pListHead;
		ListNode* slow = pListHead;
		if (fast == NULL || k == 0)
		{
			return NULL;
		}
		else
		{
			int i = 0;
			for (i = 0; i<k; i++)
			{
				if (fast == NULL)
				{
					return NULL;
				}
				fast = fast->next;
			}
			while (fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return slow;
		}
	}
};