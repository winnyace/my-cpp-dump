#include <iostream>
#include <string>
using namespace std;

string string_to_int(string str)
{
	int num = stoi(str);
	if (num > 9)
		return "greater than 9";
	else
		switch (num)
		{
			case 1:
				return "one";	
			case 2:
				return "two";	
			case 3:
				return "three";
			case 4:
				return "four";	
			case 5:
				return "five";
			case 6:
				return "six";
			case 7:
				return "seven";						
			case 8:
				return "eight";						
			case 9:
				return "nine";
			default:
				return "greater than 9";
		};
}

int main()
{
	string str;
	cin >> str;
	cout << string_to_int(str);
}
