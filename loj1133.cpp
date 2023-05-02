#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int tc,n,m,x,i,j,d,kh,y,z,k,l;
    char a,b;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>n>>m;
        for(j=0;j<n;j++)
        {
            cin>>x;
            v.push_back(x);
        }
        for(j=0;j<m;j++)
        {
            cin>>a;
            if(a=='S')
            {
                cin>>d;
                for(k=0;k<n;k++)
                {
                    v[k]+=d;
                }
            }
            else if(a=='M')
            {
                cin>>d;
                for(k=0;k<n;k++)
                {
                    v[k]*=d;
                }
            }
            else if(a=='D')
            {
                cin>>kh;
                for(k=0;k<n;k++)
                {
                    v[k]/=kh;
                }
            }
            else if(a=='P')
            {
                cin>>y>>z;
                swap(v[y],v[z]);
            }
            else
            {
                for (int k =0; k<=n/2; k++) 
                {
				    swap(v[k], v[(n-1)-k]);
                }
            }
        }
        cout<<"Case "<<i<<":"<<endl;
        for(k=0;k<n;k++)
        {
            cout<<v[k]<<" ";
        }
        cout<<"\n";
        v.clear();
    }
    return 0;
}