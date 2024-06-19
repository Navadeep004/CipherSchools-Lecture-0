#include<iostream>
using namespace std;
int main()
//{
//	int marks;
	
//	cout<<"Students, enter the marks to check the grades :"<<endl;
//	cin>>marks;
	
//	if(marks>90)
//	{
//		cout<<"O grade";
//	}
//	else if(marks>80)
//	{
//		cout<<"A grade";
//	}
//	else if(marks>70)
//	{
//		cout<<"B grade";
//	}
//	else if(marks>60)
//	{
//		cout<<"C grade";
//	}
//	else
//	{
//		cout<<"F grade";
//	}
//}


{
int month;
cout<<"Enter the month "<<endl;
cin>>month;

switch(month){
	case 1:
		cout<<"Jan"<<endl;
		break;
	case 2:
		cout<<"Feb"<<endl;
		break;
	case 3:
		cout<<"March"<<endl;
		break;
	case 4:
		cout<<"April"<<endl;
		break;
	default:
		cout<<"Invalid input";
	}
	return 0;
}
