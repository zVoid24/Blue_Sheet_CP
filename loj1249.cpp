#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,n,th,sn,x,y,z,i,j,vol;
    string str,str1,str2;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        th=0;
        sn=1000000;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>str>>x>>y>>z;
            vol=x*y*z;
            if(vol>=th)
            {
                th=vol;
                str1=str;
            }
            if(vol<sn)
            {
                sn=vol;
                str2=str;
            }
        }
        if(th-sn==0)
        cout<<"Case "<<i<<": no thief"<<endl;
        else
        cout<<"Case "<<i<<": "<<str1<<" took chocolate from "<<str2<<endl;
    }
    return 0;
}