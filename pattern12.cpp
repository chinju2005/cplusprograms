#include <iostream>

using namespace std;

int main()
{
    int rows=5,i,j,k,z;
    z=2*rows-1;
   
    
    for(i=rows;i>=1;i--)
    {
        for(j=rows-1;j>=i;j--)
        {
            cout<<" ";
        }
        
        for(k=1;k<=z;k++)
        {
            cout<<"*";
            
        
        }  
        z-=2;
        cout<<endl;
        
    }

    return 0;
}
