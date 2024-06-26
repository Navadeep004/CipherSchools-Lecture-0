#include<iostream>
using namespace std;
int main()
{
	int i;
	i=4;
	
	while(i<60)
	{
		cout<<i<<" ";
		i++;
	}
}


#include<iostream>
using namespace std;
int main()
{
	int input;
	int i;
	i=5;
	
	for(i=2;i<70;i++)
	{
		cin>>input;
		if(input == 59)
		{
			cout<<"Congrats you have guessed correct";
			break;
		}
		
	}
}
