
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the values before swapping:";
    cin>>a>>b;
    int temp=a;
    a=b;
    b=temp;
    cout<<"\n a: "<<a<< "\tb : "<<b;

    return 0;
}