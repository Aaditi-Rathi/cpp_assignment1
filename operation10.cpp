#include<iostream>
using namespace std;
class Palindrome
{
    int n;
    public:
    void getNum()
    {
        cout<<"Enter a number: ";
        cin>>n;
    }
    inline void checkPalindrome()
    {
        int temp=n, rev=0,rem;
        while (temp>0)
        {
            rem=temp%10;
            rev=rev*10+rem;
            temp/=10;
        }
        if(rev==n)
        cout<<"It is a Palindrome Number";
        else
        cout<<"It is not a Palindrome Number";
    }
};
int main()
{
    Palindrome object;
    object.getNum();
    object.checkPalindrome();
    return 0;

}
