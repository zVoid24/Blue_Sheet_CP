#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int tc,n,x,y,i,r,sq,tmp;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>n;
        sq=ceil(sqrt(n));
        r=sq*sq-n;
        if(r<sq)
        {
            x=sq;
            y=r+1;
        }
        else
        {
            x=2*sq-r-1;
            y=sq;
        }
        if(sq&1)
        {
            swap(x,y);
        }
        cout<<"Case "<<i<<": "<<x<<" "<<y<<endl;
    }
    return 0;
}