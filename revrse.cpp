#include <iostream>
using namespace std;

int main()
{
int sum=0;
int number,temp;
cout<<"Enter the number";
cin>>number;
temp=number;
while(temp!=0)
{
int unit_digit=temp%10;
sum=sum*10+unit_digit;
temp=temp/10;
}
cout<<sum;
if(number==sum){
cout<<sum<<"Reversed number";
}

}
