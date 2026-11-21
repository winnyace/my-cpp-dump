#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
using namespace std;

int main()
{
	vector<int> list;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		list.push_back(num);
	}
	sort(list.begin(), list.end());
	for(auto& i : list)
		cout << i << " ";
	return 0;
}
