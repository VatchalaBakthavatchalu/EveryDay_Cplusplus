#include <iostream>

using namespace std;

int main()
{
int rows;


cout<<"Enter number od to be printed";
cin>>rows;

for (int i=1;i<=rows;i++)
{
for (int j=1;j<=i;j++)
{
    int result=j%2;
cout<<result<<" ";


}



cout<<"\n";

}

}
