#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void getset(vector<vector<int>> ans, int m)
{
	if (4 == m)
		return;

	for (auto temp : ans)
	{
		temp.push_back(m);
		for (auto j : temp)
		{
			cout << j << " ";
		}
		cout << endl;
		ans.push_back(temp);
	}
	getset(ans, m + 1);
}
int main()
{
	vector<vector<int>> ans = { {0}, {0,1}, {0,1,2} };
	getset(ans, 3);
	for (auto i : ans)
	{
		for (auto j : i)
		{
			cout << j << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

