#include<iostream>
#include<string.h>

using namespace std;
int main()
{
	int arr[5];
	int n , i ;
	cout<<"enter 5 value"<<endl;
	
	for(i=0 ; i<=4 ;i++)
{
	cin>>n;
	arr[i]=n;
}
	for(i=0 ; i<=4 ;i++)
	{
	
	cout<<arr[i];
	cout<<" ";
	
	}
	cout<<endl;
	
	int cube;
	
	for(i=0 ; i<=4 ; i++){
		
		n=arr[i];
		cube = n*n*n;
		
		cout<<"Cube of "<<arr[i]<<" : "<<cube<<endl;
	}
		return 0;
}

