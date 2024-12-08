#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter the marks to print the grade of the student"<<endl;
    cin>>marks;

if(marks>90)
{
    cout<<"The student is passed with A grade"<<endl;
}
else if (marks>=80 && marks<=90)
{
    cout<<"The student is passed with B grade"<<endl;
}
else if (marks>=60 && marks<=70)
{
    cout<<"the student is passed with C grade"<<endl;
}
else if(marks>=35 && marks<=45)
{
    cout<<"Congrats you have passed the exam"<<endl;
}
else if(marks>=45 && marks<=55)
{
    cout<<"Congrats you have passed the exam"<<endl;
}
else if(marks>=55 && marks<=69)
{
    cout<<"Congrats you have passed the exam"<<endl;
}
else 
{
	cout<<"Sorry yoy have failed the exam"<<endl;
}
return 0;
}
