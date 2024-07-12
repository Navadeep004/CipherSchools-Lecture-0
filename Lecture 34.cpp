#include<iostream>
#include<vector>
using namespace std;

int main()
{

vector<int> a;
cout<<"The size of the vector is : "<<a.size();

int i;

for(i=0;i<5;i++)
{
	a.push_back(i+1);
}
	cout<<"The size of the vector is : "<<a.size();
	
	a.pop_back();
	cout<<"The size of the vector is : "<<a.size();
	
	cout<<"The first element of the vector is : "<<a[0]<<endl;
	
	for(auto j=a.begin();j<a.end();j++)
	{
		cout<<*j;
	}
	cout<<"The capacity of the vector is : "<<a.capacity()<<endl;
	
}


  
