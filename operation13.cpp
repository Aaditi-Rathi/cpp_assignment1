#include<iostream>
using namespace std;
class Book
{
    int book_id;
    char book_name;
    int available;
    public:
    void getDetails()
    {
        cout<<"Enter Book ID: ";
        cin>>book_id;
        cout<<"Enter Book Name: ";
        cin>>book_name;
        cout<<"Enter the available copies: ";
        cin>>available;
    }
    void display()
    {
        cout<<"\n Book Id: "<<book_id;
        cout<<"\n Book Name: "<<book_name;
        cout<<"\n Availability of book: ";available;
    }
    void issueBook()
    {
        if(available>0)
        {
            available--;
            cout<<"Book Issued Successfully";
        }
        else
        {
            cout<<"Book Not available";
        }
    }
};
int main()
{
    Book object;
    object.getDetails();
    object.display();
    object.issueBook();
    return 0;
}