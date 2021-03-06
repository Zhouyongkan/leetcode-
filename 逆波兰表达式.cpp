class Solution {
public:
	int evalRPN(vector<string>& tokens) {
		stack<int> s;
		for (size_t i = 0; i<tokens.size(); ++i)
		{
			string& str = tokens[i];
			if (!(str == "+" || str == "-" || str == "*" || str == "/"))
			{
				s.push(atoi(str.c_str()));
			}

			else
			{
				int right = s.top();
				s.pop();
				int left = s.top();
				s.pop();
				if (str == "+")
				{
					s.push(left + right);
				}
				if (str == "-")
				{
					s.push(left - right);
				}
				if (str == "*")
				{
					s.push(left*right);
				}
				if (str == "/")
				{
					s.push(left / right);
				}
			}
		}
		return s.top();
	}
};