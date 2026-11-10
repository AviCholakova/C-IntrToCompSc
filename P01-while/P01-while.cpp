#include <iostream>
using namespace std;
#include <iomanip>
int main()
{
	/*int x;
	double sum = 0;
	double avg = 0;
	int br = 0;
	cout << "Enter a number: ";
	cin >> x;
	while (x != 0)
	{
		sum += x;
		br++;
		cout << "Enter a number: ";
		cin >> x;
	}
	avg = sum / br;
	cout << avg;*/

	/*int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 5 == 0)
		{
			sum += i;
			cout << i << " ";
		}
	}
	cout << endl;
	cout << sum;*/

	/*int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 10 == 5)
		{
			sum += i;
			cout << i << " ";
		}
	}
	cout << endl;
	cout << sum;*/

	/*int n;
	cin >> n;
	int min = INT_MAX;
	int max = INT_MIN;
	for (int i = 1; i <= 10; i++)
	{
		if (n > max)
		{
			max = n;
		}
		else if (n < min)
		{
			min = n;
		}
		cin >> n;
	}
	cout << "MAX = " << max << endl << "MIN = " << min;*/

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << setw(3) <<i * j;
		}
		cout << endl;
	}


}
