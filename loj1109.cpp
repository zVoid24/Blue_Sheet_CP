#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.second<b.second)
    return 1;
    if(a.second>b.second)
    return 0;
    if(a.first>b.first)
    return 1;
    else
    return 0;
}

int main()
{
    vector<pair<int,int>>vp(1001);
    int tc,n,i,j;
    for(i=1;i<=1000;i++)
    {
        vp[i].first=i;
        vp[i].second=0;
    }
    for(i=1;i<=1000;i++)
    {
        for(j=i;j<=1000;j+=i)
        {
            vp[j].second++;
        }
    }
    sort(vp.begin(),vp.end(),cmp);
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>n;
        cout<<"Case "<<i<<": "<<vp[n].first<<endl;
    }
    return 0;
}