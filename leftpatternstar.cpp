#include <iostream>
using namespace std;

int main()
{
int rows;
cout<<"Enter the number of rows";
cin>>rows;

for(int i=1;i<=rows;i++)
{
for (int j=1;j<=rows-1;j++)
{
cout<<" ";
}
rows--;
for (int k=1;k<=i;k++)
{
cout<<"*";
}
cout<<"\n";
}

}
