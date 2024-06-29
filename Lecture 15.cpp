#include<iostream>
using namespace std;

int sum(int a,int b)
{
	int c;
	
	c = a + b;
	
	return c;
}

int main()
{
	int a,b;
	
	a = 4;
	b = 6;
	
	int c;
	
	c = sum(a,b);
	cout<<c;
	
	return 0;
}
