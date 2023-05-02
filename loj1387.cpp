#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,sum,x,i,n,j;
    string str;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        sum=0;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>str;
            if(str=="donate")
            {
                cin>>x;
                sum+=x;
            }
            else
            cout<<sum<<endl;
        }
    }
    return 0;
}