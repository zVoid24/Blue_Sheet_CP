#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,sum=0;
    cin>>n;
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            sum+=i;
        }
    }
    else
    {
        for(int i=1;i>=n;i--)
        {
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}