#include<iostream>

using namespace std;

struct S
{
	int a;
	S *p;
}

void creat_list(S **p)
{
	s *temp_p = NULL;
	s *mid_p = NULL;
	for(int i = 0; i < 20; i++)
	{
		mid_p = new S;
		mid_p->p = temp_p;
		mid_p->a = 10 + i;
		temp_p = mid_p;
	        
	}
	*p = temp_p;
}

void print(S *p)
{
	if(p == NULL)
	{
		return;
	}
	S *temp_p = p;
	while(1)
	{
		cout<<temp_p->a<<endl;
		if(temp_p->p == NULL)
		{
			break;
		}
		temp_p = temp_p->p;
	}
}

int main()
{
	S *p = NULL;
	creat_list(&p);
	print(p);

	return 0;
}
	

