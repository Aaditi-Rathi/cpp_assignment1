#include<iostream>
using namespace std;
class Medicalbill
{
    float consultationfee;
    float medicineCost;
    float roomCharge;
    float total;

    public:
    Medicalbill(float c, float m, float r)
    {
        consultationfee=c;
        medicineCost=m;
        roomCharge=r;
        total=consultationfee+medicineCost+roomCharge;
    }
    void display()
    {
        cout<<"Consultation Fee: "<<consultationfee<<endl;
        cout<<"Medicine Cost: "<<medicineCost<<endl;
        cout<<"Room Charges:  "<<roomCharge<<endl;
        cout<<"Total Medical Bill: "<<total<<endl;
    }
};
int main()
{
    float c,m,r;
    cout<<"Enter consultation fee: ";
    cin>>c;
    cout<<"Enter Medicine Cost: ";
    cin>>m;
    cout<<"Enter Room Charges: ";
    cin>>r;
    Medicalbill bill(c,m,r);
    bill.display();
    return 0;
}