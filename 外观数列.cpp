class Solution {
public:
	string countAndSay(int n) {
		if (n == 1) return "1";
		string a = "";
		string pre = countAndSay(n - 1);
		int len = pre.size();
		int count = 1;
		for (int i = 1; i<len; i++){
			if (pre[i] == pre[i - 1])
			{
				count++;
			}
			else
			{
				a = a + to_string(count) + pre[i - 1];
				count = 1;
			}
		}
		a = a + to_string(count) + pre[len - 1];
		return a;
	}
};