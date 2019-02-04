#include <iostream>

using namespace std;

int main()
{
int rows;
cout<<"Enter the number of rows";
cin>>rows;
int M=rows-1;

for(int i=rows;i>=1;i--)

{
    int l=1;
    for (int k=1;k<l;k++)
    {
    cout<<"- ";


    }
    l++;
     for (int j=1;j<=i;j++)
    {

    cout<<"* ";
    }


    cout<<"\n";
}


}
