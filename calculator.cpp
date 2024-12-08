#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout<<"The following is the calculator designed by me" <<endl;
    cout<<"Enter the two numbers for the calculation"<<endl;
    cin>>a>>b;
    int sum=a+b;
    int sub=a-b;
    int mul=a*b;
    int div=a/b;
    int modulo=a%b;
    cout<<"the addition of the number is "<<sum<<endl;       
    cout<<"the subtraction between the two numbers is "<<sub<<endl;
    cout<<"the ans to the applied division is  "<<div<<endl;
    cout<<"the product of the two number is  "<<mul<<endl;
    cout<<"the modulo of the two number is  "<<modulo<<endl;
    return 0;
}
