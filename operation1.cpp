#include<iostream>
using namespace std;
    void area(float b,float h)
{
    cout<<"Area of Triangle="<<0.5*b*h;
}
 
    void area(float r)
    {
        cout<<"Area of circle="<<3.14*r*r;
    }

int main()
{
    area(3,8);
    area(8);
    return 0;
}
