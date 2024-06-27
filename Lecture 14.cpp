#include<iostream>
using namespace std;

void myFunction()
{
	cout<<"The code has executed.";
	
}

int main()
{
	myFunction();
	
	return 0;
}


#include<iostream>
using namespace std;


int add(int a,int b)
{
	return a + b;
}
int main(){
	int num1=6;
	int num2=3;
	int sum=add(num1,num2);
	cout<<"Sum is"<<sum<<endl;
	return 0;
}
