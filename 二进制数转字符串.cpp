class Solution {
public:
	string printBin(double num) {
		string s("0.");
		while (num != 0 && s.size()<33)
		{
			num = num * 2;
			if (num >= 1)
			{
				num -= 1;
				s = s + '1';
			}
			else{
				s.push_back('0');
			}

		}
		if (s.size() >32)
		{
			return "ERROR";
		}
		else
			return s;
	}
};