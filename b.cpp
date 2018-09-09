#include<iostream>

using namespace std;

int test()
{
	cout<<"这是一个来自PC的程序,要上传到github"<<endl;

	return 0;
}

int main()
{
	for(int i = 0; i < 10; i++)
	{
		cout<< i <<" ";
	}
	cout<<endl;
	test();

	return 0;
}
