#include<iostream>
using namespace std;
class ElectricityBill
{
    private:
    int units;
    float bill,discount,FinalBill;
    public:
    void input()
    {
        cout<<"Enter Number of units consumed: ";
        cin>>units;
    }
    void calculateBill()
    {
        if(units<=100)
        {
            bill=units*5;
        }
        else if(units<=200)
        {
            bill=(100*5)+(units-100)*7;
        }
        else
        {
            bill=(100*5)+(100*7)+(units-200)*10;
        }
    }
    void applyDiscount()
    {
        discount=bill*0.02;
        FinalBill=bill-discount;
    }
    void display()
    {
        cout<<"Electricity Bill Details:"<<endl;
        cout<<"Units Consumed:"<<units<<endl;
        cout<<"Total Bill:"<<bill<<endl;
        cout<<"Discount:"<<discount<<endl;
        cout<<"Final Bill:"<<FinalBill<<endl;
    }

};
int main()
{
    ElectricityBill object;
    object.input();
    object.calculateBill();
    object.applyDiscount();
    object.display();
    
    return 0;
}