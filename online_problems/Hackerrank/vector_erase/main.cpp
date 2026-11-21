#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> list;
	int n, x, a, b;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int num;
		cin >> num;
		list.push_back(num);
	}

	cin >> x;
	list.erase(list.begin()+x-1);

	cin >> a >> b;
	list.erase(list.begin()+a-1, list.begin()+b-1);
	cout << list.size() << endl;
	for (auto& i : list)
		cout << i << " ";
}
