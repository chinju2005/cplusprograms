#include <iostream>

using namespace std;

int main()
{
    int a,b,x,sum,diff,prod,div;
    cout<<"Enter the two values:";
    cin>>a>>b;
  
cout<<"\na:"<<a;
cout<<"\nb:"<<b;
cout<<"\nChoose a number from 1 to 4:";
cin>>x;
cout<<x;
switch(x)
{
    case 1:cout<<"\nThe sum is:"<<sum;
    sum = a+b;

    break;


case 2:
diff =a-b;
cout<<"\nThe difference is:"<<diff;
break;


case 3:
prod = a*b;
cout<<"\nThe product is:"<<prod;
break;


case 4:
div=a/b;
cout<<"\nThe  division is:"<<div;
break;

default:
cout<<"\nEnter the valid number";
}
    return 0;
}

