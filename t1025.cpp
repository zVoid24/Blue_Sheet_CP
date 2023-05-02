#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int tc,x,count=0;
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<(tc/2)+1;i++)
    {
        count+=(v[i]/2)+1;
    }
    cout<<count<<endl;
    return 0;
}