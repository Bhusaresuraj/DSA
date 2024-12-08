#include <iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter the character to be printed on the screen"<<endl;
	cin>>ch;
	if(ch>='a'&&ch<='z')
	{
	cout<<"The character you have entered on the screen is Lowercase"<<endl;
}

 else if(ch>='A'&&ch<='Z')
{
	cout<<"The character you have entered on the screen is Uppercase"<<endl;
}
else 
{
	cout<<"the charcter entered is not valid"<<endl;
}
	
}

