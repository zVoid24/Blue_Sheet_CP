#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,tc,x1,y1,z1,x2,y2,z2,i,hx1,hy1,hz1,j;
    int lx2,ly2,lz2,x,y,z; 
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        lx2=ly2=lz2=1001;
        hx1=hy1=hz1=0; 
        cin>>t;
        for(j=1;j<=t;j++)
        {
            cin>>x1>>y1>>z1>>x2>>y2>>z2;
            hx1=max(hx1,x1);
            hy1=max(hy1,y1);
            hz1=max(hz1,z1);
            lx2=min(lx2,x2);
            ly2=min(ly2,y2);
            lz2=min(lz2,z2);
        }
        x=lx2-hx1;
        y=ly2-hy1;
        z=lz2-hz1;
        if(x*y*z>0)
        cout<<"Case "<<i<<": "<<x*y*z<<endl;
        else
        cout<<"Case "<<i<<": "<<"0"<<endl;
    }
    return 0;
}