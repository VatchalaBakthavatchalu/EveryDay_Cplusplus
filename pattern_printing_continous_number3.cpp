#include <iostream>

using namespace std;

int main()
{
int rows;


cout<<"Enter number od to be printed";
cin>>rows;
int number=1;
for (int i=1;i<=rows;i++)
{
for (int j=1;j<=i;j++)
{
cout<<i*j<<" ";

}


cout<<"\n";

}

}
