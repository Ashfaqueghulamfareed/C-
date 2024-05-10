#include <iostream>
using namespace std;
int main ()
{
	int arr[10]={1,2,3,0,0,0,-1,-2,-3,-4};
	int zero=0, possitive=0,negative=0;
	
	for (int f=0; f<10;f++)
	{
	 	if(arr[f]<0)
	 	{
	 		negative++;	
		 }
		 else if (arr[f]==0)
		 {
		 	zero++;
		 }
		 else
		 {
		 	possitive++;
		 }
	}
	
	cout<<"negative numbers:  "<<negative<<endl;
	cout<<"zero numbers:  "<<zero<<endl;
	cout<<"possitive numbers:  "<<possitive;

	return 0;
}
 //for (int r=0; r<10; r++)
