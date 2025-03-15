#include <iostream>
using namespace std;

int main()
{
	int year;
	bool yearFound = false;
	cin >> year;
	while (!yearFound)
	{
		int arr[4] = {-1, -2, -3, -4};
		year++;
		int byear = year;
		yearFound = true;
		for (int i = 0; i < 4; i++)
		{
			arr[i] = byear % 10;
			byear /= 10;
			for (int j = i - 1; j >= 0; j--)
			{
				if (arr[i] == arr[j])
				{
					yearFound = false;
				}
			}
		}
	}
	cout << year << endl;
}
