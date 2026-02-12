#include<iostream>
using namespace std;
class LeapYear
{
    int year;
    public:
    void getYear()
    {
        cout<<"Enter a year: ";
        cin>>year;
    }
    void checkLeap()
    {
        if((year%4==0 && year%100!=0)||(year%400==0))
        cout<<"It is a Leap Year";
        else
        cout<<"It is not a Leap Year";
    }
};
int main()
{
    LeapYear object;
    object.getYear();
    object.checkLeap();
    return 0;
}