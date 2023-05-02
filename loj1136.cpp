#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,x,y,i,zerotox,zerotoy,total;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>x>>y;
        zerotox=(x/3)*2;
        if(x%3==2)
        zerotox++;
        zerotoy=(y/3)*2;
        if(y%3==2)
        zerotoy++;
        total=zerotoy-zerotox+1;
        if(x%3==1)
        total--;
        cout<<"Case "<<i<<": "<<total<<endl;
    }
    return 0;
}