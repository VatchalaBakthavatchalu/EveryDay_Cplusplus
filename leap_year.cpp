#include <iostream>
using namespace std;

int main()
{
int year;
cout<<"Enter the year";
cin>>year;

if(year%4 == 0 && year % 400 == 0)
    {
    cout<<year<<"year is leap year";
    }
else if (year % 100 == 0)
    {
     cout<<year<<"year is not a leap year";
    }
else{
        cout<<"Year is not a leap year";

}

}
