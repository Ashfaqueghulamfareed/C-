#include <iostream>
using namespace std;
int main()
{
	int num1 ,num2; 
	
	cout<<"enter num one "<<endl;
	cin>>num1;
	char x;
	cin>>x;	
	cout<<"enter num two"<<endl;
	cin>>num2;
	
	
	if (x=='a')
	cout<<" addition = "<<num1<<num2;
		else if (x=='s')
	cout<<" subtraction = "<<num1-num2;
	else if (x=='m')
	cout<<" multipluction = "<<num1*num2;
	else if (x=='d')
	cout<<" divide = "<<num1/num2;
	else if (x=='r')
	cout<<" remainder is = "<<num1%num2;
}
