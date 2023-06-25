#include <iostream>
#include <vector>

#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int x , y;
	int a7a = 0;
	int counter = 0;
	int ia[100];
	cin >> x >> y;
	y -= 1;
	for (int i = 0; i < x; i++)
	{
		cin >> ia[i];
	}

	int right = y + 1;
	int left = y - 1;
	if (ia[y] == 1) counter++;
	while (right<x || left>=0)
	{

		if (right < x && left >= 0)
		{
			if (ia[right] == 1 && ia[left] == 1) counter+=2;
		}
		else if (ia[right] == 1 || ia[left] == 1) counter++;
		right++;
		left--;
	}

	cout << counter;

	return 0;
}
