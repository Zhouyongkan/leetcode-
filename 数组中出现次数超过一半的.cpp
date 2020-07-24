class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		map<int, int> numbersMap;
		for (int i = 0; i<numbers.size(); i++)
		{
			numbersMap[numbers[i]] += 1;
		}
		int max = numbers.size() / 2;
		int number = 0;
		for (map<int, int>::iterator it = numbersMap.begin(); it != numbersMap.end(); it++)
		{
			if (max<(it->second))
			{
				number = it->first;
			}
		}
		return number;
	}
};