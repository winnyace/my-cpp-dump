#include <iostream>
#include <cmath>
using namespace std;

int quad(int a, int b, int c)
{
	return (-b + (sqrt(b*b - 4 * a * c))) / (2 * a);
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << quad(a, b, c);
}
