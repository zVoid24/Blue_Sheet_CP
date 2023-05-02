#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int tc,tc2,x,i,j,dif,total;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        total=0;
        cin>>tc2;
        for(j=0;j<tc2;j++)
        {
            cin>>x;
            v.push_back(x);
        }
        dif=v[0]-2;
        total+=dif/5;
        if(dif%5)
        total++;
        for(j=1;j<tc2;j++)
        {
            if(v[j]>v[j-1])
            {
                dif=v[j]-v[j-1];
                total+=dif/5;
                if(dif%5)
                total++;
            }
        }
        cout<<"Case "<<i<<": "<<total<<endl;
        v.clear();
    }
    return 0;
}