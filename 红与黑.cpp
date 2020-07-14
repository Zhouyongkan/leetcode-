

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int arr[] = { -1,0,1 };
int getnum(vector<vector<int>>& ret, int i, int j)
{    ret[i][j] = 0;  
	int sum = 1;   
	for (int a = 0; a < 3; ++a)   
	{      
		for (int b = 0; b < 3; ++b)  
		{         
			if (i + arr[a] < ret.size() && i + arr[a] >= 0 && j + arr[b] < ret[0].size() && j + arr[b] >= 0 && ret[i + arr[a]][j + arr[b]]&&abs(arr[a])!=abs(arr[b]))   
				sum+=getnum(ret, i + arr[a], j + arr[b]);    
		}  
	}        
	return sum;
}
int main()
{    int m, n; 
	while (cin >> m >> n)
	{       
		vector<string> str;
		int num = 0;
		string temp;
		vector<vector<int>> ret(m, vector<int>(n, 1));
		cin.get();
		for (int i = 0; i<m; ++i)
		{            
			getline(cin, temp);
			str.push_back(temp); 
		}        
		int n1 = 0, n2 = 0;
		for (int i = 0; i<m; ++i)
		{ 
			for (int j = 0; j<n; ++j)
			{
				if (str[i][j] == '#')  
					ret[i][j] = 0; 
				if (str[i][j] == '@') 
				{ 
					n1 = i;  
					n2 = j; 
				}
			} 
		}       
		cout << getnum(ret, n1, n2) << endl;
	}   
	return 0;
}
