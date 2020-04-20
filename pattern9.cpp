
#include <iostream>

using namespace std;

int main()
{
    char ch='a';
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<ch++;
        }
    
            cout<<endl;
    }    


    return 0;
}
