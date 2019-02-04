#include <iostream>
using namespace std;

int main()
{
int sum=0;
int number;
cout<<"Enter the number";
cin>>number;

int temp=number;
int unit_digit;

 while(temp!=0)
 {
    unit_digit=temp%10;
    sum+=unit_digit*unit_digit*unit_digit;
    temp=temp/10;
 }
 cout<<sum;
 if(number == sum)
 {
    cout<<"Entered number is Armstrong";
 }
 else
 {
    cout<<"Entered number is not Armstrong number";
 }


}
