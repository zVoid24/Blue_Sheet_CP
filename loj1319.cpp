#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x=0,i,j,c;
    cin>>n;
    int arr[n][n];
    for(i=0;i<2*n-1;i++)
    {
        for(j=0;j<=i && j<n;j++)
        {
            c=i-j;
            if(c>=0 && c<n)
            arr[j][c]=++x;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}