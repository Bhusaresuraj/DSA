#include<iostream>
using namespace  std;
int main()
{
    char  ch;
    cout<<"Enter the value"<<endl;
    cin>>ch;
    if(ch>=65 && ch<=90)
    {
    	cout<<"The charcter is uppercase"<<endl;
	}
	else if(ch>=97 && ch<=122) 
	{
		cout<<"the character is lowercase"<<endl;
	}
	else
	{
		cout<<"The input is invalid"<<endl;
	}
}
