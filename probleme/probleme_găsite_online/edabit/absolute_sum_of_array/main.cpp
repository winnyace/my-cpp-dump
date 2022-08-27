#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getAbsSum(vector<int> arr)
{
	int sum = 0;
	for (auto& i : arr)
		if (i < 0)
			sum += (i * -1);
		else
			sum += i;
	return sum;
}

int main()
{
	vector<int> arr;
	int n;
	while (n != 0)
	{
		cin >> n;
		if (n < 0)
			arr.push_back(n*(-1));
		else
			arr.push_back(n);
		if (n == 0)
			break;
	}
	cout << getAbsSum(arr);
}
