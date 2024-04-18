#include<iostream>
using namespace std;
string arr1[15],arr2[15],arr3[15],arr4[15],arr5[15];
int total=0;
void enter()
{
int add;
cout<<"how many student do you want to add = ";
cin>>add;
if(total==0)
{
for(int i=0; i<add; i++)
{
	cout<<"/nEnter data of student "<<i+1<<endl<<endl;
	cout<<"enter name: ";
	cin>>arr1[i];// for store name
	cout<<"enter roll no: ";
	cin>>arr2[i];// for store roll no
	cout<<"enter course: ";
	cin>>arr3[i];//for store course
	cout<<"enter class: ";
	cin>>arr4[i];// for store class
	cout<<"enter contact num: ";
	cin>>arr5[i];//for store contact
	}
}
else{
   for(int i=total; i<total+add; i++)//for add the value of student
{
	cout<<"/nEnter data of student "<<i+1<<endl<<endl;
	cout<<"enter name: ";
	cin>>arr1[i];
	cout<<"enter roll no: ";
	cin>>arr2[i];
	cout<<"enter course: ";
	cin>>arr3[i];
	cout<<"enter class: ";
	cin>>arr4[i];
	cout<<"enter contact num: ";
	cin>>arr5[i];
	}	
}
total=total+add;//for total + add
}
void show()
{
	if(total==0)
{
	cout<<"NO DATA IS ENTERED"<<endl;
}

	for(int i=0; i<total;i++)
	{ 
		cout<<"show student record"<<i+1<<endl;
		cout<<"name :"<<arr1[i]<<endl;	
		cout<<"roll no :"<<arr2[i]<<endl;
		cout<<"course :"<<arr3[i]<<endl;
		cout<<"class :"<<arr4[i]<<endl;
		cout<<"contact :"<<arr5[i]<<endl;
	}
}
void search()
{
	string rollno;
	cout<<"enter student roll no to search ";
	cin>>rollno;
	for(int i=0; i<total;i++)
	{
		if(rollno==arr2[i])
		{
			cout<<"show student record"<<i+1<<endl;
		    cout<<"name :"<<arr1[i]<<endl;
		    cout<<"roll no :"<<arr2[i]<<endl;
		    cout<<"course :"<<arr3[i]<<endl;
		    cout<<"class :"<<arr4[i]<<endl;
		    cout<<"contact :"<<arr5[i]<<endl;
		}
	}
}
void update()
{
	string rollno;
	cout<<"enter student roll no to update ";
	cin>>rollno;
	for(int i=0; i<total;i++)
	{
		if(rollno==arr2[i])
		{
			cout<<"previous data"<<endl<<endl;
			cout<<"show student record"<<i+1<<endl;
		    cout<<"name :"<<arr1[i]<<endl;
		    cout<<"roll no :"<<arr2[i]<<endl;
		    cout<<"course :"<<arr3[i]<<endl;
		    cout<<"class :"<<arr4[i]<<endl;
		    cout<<"contact :"<<arr5[i]<<endl;
		    cout<<"/nEnter new data"<<endl;
		    cout<<"Enter name: ";
		    cin>>arr1[i];
		    cout<<"Enter rollno:";
		    cin>>arr2[i];
		    cout<<"Enter course: ";
		    cin>>arr3[i];
		    cout<<"Enter class:";
		    cin>>arr4[i];
		    cout<<"Enter Contact no: ";
		    cin>>arr5[i];
		}
	}
	cout<<"Your requaired data is updated..!!"<<endl;
}
void deleterecord()
{
int a;
cout<<"Press 1 to delete full record."<<endl;
cout<<"press 2 to delete specific record."<<endl;
cin>>a;
if(a==1)
{
	total=0;
	cout<<"your record is deleted"<<endl<<endl;
}
else 
{
	string rollno;
	cout<<"Enter rollno to delete: ";
	cin>>rollno;
	for(int i=0; i<total;i++)
	{
		if(rollno==arr2[i])
		{
			for(int j=i;j<total;j++)
			{
				arr1[j]=arr1[j+1];
				arr2[j]=arr2[j+1];
				arr3[j]=arr3[j+1];
				arr4[j]=arr4[j+1];
				arr5[j]=arr5[j+1];
			}
			total--;
			cout<<"your required record is deleted..!! ";
		}
	}
}
}
int main()
{
	int value;
	while(true)
	{//to valudaite with user..
	cout<<"\t\t\t\t___________________________"<<endl;
	cout<<"\t\t\t\t|WELCOME TO STUDENTS RECORD|"<<endl;
	cout<<"\t\t\t\t|__________________________|"<<endl;
	cout<<"\t\t\t\tpress 1 to enter data"<<endl;
	cout<<"\t\t\t\tpress 2 to show data"<<endl;
	cout<<"\t\t\t\tpress 3 to search data"<<endl;
	cout<<"\t\t\t\tpress 4 to update data"<<endl;
	cout<<"\t\t\t\tpress 5 to delete data"<<endl;
	cout<<"\t\t\t\tpress 6 to exist"<<endl;
	cin>>value;
	switch(value)
	{
	case 1:
	enter();
	break;
	case 2:
		show();
		break;
		case 3:
			search();
			break;
			case 4:
				update();
				break;
				case 5:
					deleterecord();
					break;
					case 6:
					exit(0);
					break;
					default:
						cout<<"invalid input"<<endl;
						break;
				}
	}
}
	
