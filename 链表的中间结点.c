#define _CRT_SECURE_NO_WARNINGS
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/

typedef struct ListNode ListNode;
struct ListNode* middleNode(struct ListNode* head)
{
	ListNode* fast = head;
	ListNode* slow = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}