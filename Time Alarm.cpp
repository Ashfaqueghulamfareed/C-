#include<iostream>
//#include<stdlib.h>//
#include<ctime>
using namespace std;
int main()
{
	int h=0,m=0,s=0,h1=0,m1=0,s1=0;
	
	cout<<"Enter time in format HH:MM:SS/n/n"<<endl;
	cin>>h>>m>>s;
	
	cout<<"Enter Alarm in HH:MM:SS/n/n"<<endl;
	cin>>h1>>m1>>s1;
	if(h<24 && m<60 && s<60)
	{
	start:
	for(h; h<24; h++)
	{
		for(m;m<60;m++)
		{
			for(s;s<60;s++)
			{//this wil clear the existing screen data
				system("CLS");
				cout<<h<<" : "<<m<<" : "<<s;
				//this condition is used to check AM & PM
				if(h<12)
				{
					cout<<"PM";
				}
				else
				{
					cout<<"AM";
				}
				if(h==h1 && m==m1 && s==s1)
				{
					cout<<"/a/a/a/a/a/a/a/a/a/a/";
				}
				//this will stop the loop for 1 second
				for(double i=0;i<9999999;i++)
				{
					i++;
					i--;
				}

			}
			s=0;
		}
		m=0;
	}
	h=0;
	//this will never stop the loop
	goto start;
}
else
{
	cout<<"Enter correct time format in HH:MM:SS/n";
}
}
