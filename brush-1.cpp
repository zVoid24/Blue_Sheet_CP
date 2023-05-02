#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,tc1,a,sum,j=1;
    cin>>tc;
    while(tc--)
    {
        sum=0;
        cin>>tc1;
        while(tc1--)
        {
            cin>>a;
            if(a<0)
            sum+=0;
            else
            sum+=a;
        }
        cout<<"Case "<<j++<<": "<<sum<<endl;
    }
    return 0;
}