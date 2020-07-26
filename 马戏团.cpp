#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct node{
	int h, w;
	node(int w_, int h_)
	{
		w = w_; h = h_;
	}
	node()
	{}
};
bool cmp(node& a, node& b)
{
	//  身高从小到大
	if (a.h != b.h)
		return a.h<b.h;
	return a.w<b.w;
}
int main(){
	int n;
	while (cin >> n)
	{
		vector<node>v;
		int tmp = n;
		while (tmp--)
		{
			int a, b, c;
			cin >> a >> b >> c;
			v.push_back(node(b, c));
		}
		sort(v.begin(), v.end(), cmp);
		vector<int>dp(n, 1);
		int ans = 1;
		for (int i = 0; i<n; ++i)
		for (int j = i - 1; j >= 0; --j)
		{
			if (v[i].w>v[j].w || v[i].w == v[j].w && v[i].h == v[j].h)
				dp[i] = max(dp[i], dp[j] + 1);
			ans = max(ans, dp[i]);
		}
		cout << ans << endl;
	}
	return 0;
}