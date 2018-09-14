#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void test()
{
	int a[10] = { 12,56,36,87,3,5,74,678,1,0 };
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			int temp = 0;
			if (a[j] > a[i])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main()
{
	test();

	return 0;
}