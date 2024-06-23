#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i;
	
	cout<<"Give 6 integers as input"<<endl;
	
	for(i=0;i<6;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"The 5 given inputs are : "<<endl;
	
	for(i=0;i<6;i++)
	{
		cout<<arr[i];
	}
	
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int arr[7];
	int i;
	
	cout<<"Give 8 integers as input"<<endl;
	
	for(i=0;i<8;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"The 8 given inputs are : "<<endl;
	
	for(i=7;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

