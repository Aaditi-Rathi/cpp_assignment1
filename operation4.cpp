#include<iostream>
using namespace std;
int main()
{
    int Year;
    cout<<"Enter The Year: ";
    cin>>Year;
    if(Year%4==0)
    {
        cout<<"It is a Leap Year";
    }
    else
    {
        cout<<"It is not a leap Year";
    }
    return 0;
}