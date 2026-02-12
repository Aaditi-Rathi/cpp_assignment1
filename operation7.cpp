#include<iostream>
using namespace std;
class swapNumbers
{
    int a,b;
    public:
    void getData()
    {
        cout<<"Enter two numbers: ";
        cin>>a>>b;
    }
    void swapValues()
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    void display()
    {
        cout<<"After swapping:"<<endl;
        cout<<"a= "<<a<<endl;
        cout<<"b= "<<b<<endl;
    }
};
int main()
{
    swapNumbers object;
    object.getData();
    object.swapValues();
    object.display();

    return 0;
}