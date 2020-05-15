class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
		stack<int> s1;
		int popi = 0;
		for (int pushi = 0; pushi<pushV.size(); ++pushi)
		{
			s1.push(pushV[pushi]);
			while (!s1.empty() && s1.top() == popV[popi])
			{
				++popi;
				s1.pop();
			}
		}
		return s1.empty();
	}
};