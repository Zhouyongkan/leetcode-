#include<iostream>
#include<vector>
#include<iomanip>  
using namespace std;

int main()
{
	vector<int> v;
	v.resize(100001);
	v[0] = 1;
	v[1] = 2;
	//�����6λ
	for (int i = 2; i<100000; +i++)
	{
		v[i] = (v[i - 1] + v[i - 2]) % 1000000;
	}
	int n = 0;
	while (cin >> n)
	{
		if (n<31)
			cout << v[n - 1] << endl;
		else
			cout << setw(6) << setfill('0') << v[n - 1] << endl;//���������ʽ
	}
	return 0;
}