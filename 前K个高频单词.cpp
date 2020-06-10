class Solution {
public:
	vector<string> topKFrequent(vector<string>& words, int k) {
		map<string, int> coutMap;
		for (auto&e : words)
		{
			coutMap[e]++;
		}
		multimap<int, string, greater<int>> coutSort;
		for (auto& kv : coutMap)
		{
			coutSort.insert(make_pair(kv.second, kv.first));
		}

		vector<string> v;
		for (auto e : coutSort)
		{
			v.push_back(e.second);
			if (--k == 0)
				break;
		}
		return v;
	}
};