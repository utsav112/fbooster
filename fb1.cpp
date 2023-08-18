#include<iostream>

using namespace std;

int main()
{

	char n;
	cout<<"enter your value: ";
	cin>>n;

	int i;

	if(n>='0' && n<='9')
    {
	cout<<"given value is numeric";
	}

	else{
		cout<<"given value is not numeric";
	}


	return 0;
}
