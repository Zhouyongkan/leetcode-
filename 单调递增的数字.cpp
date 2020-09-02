class Solution {
public:
	int monotoneIncreasingDigits(int N) {
		string s = to_string(N);
		int index = s.size();
		for (int i = s.size() - 1; i>0; i--){
			if (s[i - 1] > s[i]){
				s[i - 1]--;
				index = i;
			}
		}
		for (int i = index; i<s.size(); ++i){
			s[i] = '9';
		}
		return atoi(s.c_str());
	}
};