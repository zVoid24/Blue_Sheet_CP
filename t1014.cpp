#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    vector<int>v;
    cin>>n;
    if(n==0)
    cout<<"10\n";
    else if(n==1)
    cout<<"1\n";
    else
    {
        for(i=9;i>=2;i--)
        {
            while(n%i==0)
            {
                n/=i;
                v.push_back(i);
            }
        }
        if(n==1)
        {
            for(i=v.size()-1;i>=0;--i)
            {
                cout<<v[i];
            }
            cout<<endl;
        }
        else
        cout<<"-1\n";
    }
    return 0;
}