//  Print these type of pattern for any value
//       *                 * 
//       * *             * * 
//       * * *         * * * 
//       * * * *     * * * * 
//       * * * * * * * * * * 
//       * * * *     * * * * 
//       * * *         * * * 
//       * *             * * 
//       *                 * 
#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1;i<=n;i=i+1)
    {
        for(int j=1;j<=i;j=j+1)
        {
            cout<<"* ";
        }
        for(int k=1;k<=2*n-2*i;k=k+1)
        {
            cout<<"  ";
        }
        
        for(int l=1;l<=i;l=l+1)
        {
            cout<<"* ";
        }
        cout<<endl;

    }
    for(int i=n-1;i>=1;i=i-1)
    {
        for(int j=1;j<=i;j=j+1)
        {
            cout<<"* ";
        }
        for(int k=1;k<=(2*n)-(2*i);k=k+1)
        {
            cout<<"  ";
        }
        
        for(int l=1;l<=i;l=l+1)
        {
            cout<<"* ";
        }
        cout<<endl;

    }
}