#include <iostream>
#include <algorithm>
using namespace std;

void update(int& a, int& b)
{
	int absolute_difference = a - b;
	if (absolute_difference < 0)
		absolute_difference *= -1;
	a += b;
	b = absolute_difference;
	cout << a << endl << absolute_difference;
}

int main()
{
	int a, b;
	cin >> a >> b;
	update(a, b);
}
