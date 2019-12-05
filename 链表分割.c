/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};*/
class Partition {
public:
	ListNode* partition(ListNode* pHead, int x){
		ListNode* smallhead = (ListNode*)malloc(sizeof(ListNode));
		smallhead->next = NULL;
		ListNode* stail = smallhead;
		ListNode* bighead = (ListNode*)malloc(sizeof(ListNode));
		bighead->next = NULL;
		ListNode* btail = bighead;

		ListNode* cur = pHead;
		while (cur)
		{
			if (cur->val < x)
			{
				stail->next = cur;
				stail = cur;
			}
			else
			{
				btail->next = cur;
				btail = cur;
			}
			cur = cur->next;
		}
		btail->next = NULL;
		stail->next = bighead->next;
		ListNode* list = smallhead->next;
		free(smallhead);
		free(bighead);
		return list;
	}