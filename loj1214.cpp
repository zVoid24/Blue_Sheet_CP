#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int tc,d,i,b,j,len;
    string a;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        d=0;
        cin>>a>>b;
        b=abs(b);
        if(a[0]=='-')
        j=1;
        else
        j=0;
        len=a.length();
        for(j;j<len;j++)
        {
            d=((d*10)+(a[j]-'0'));
            d=d%b;
        }
        cout<<"Case "<<i<<": ";
        if(d)
        cout<<"not divisible"<<endl;
        else
        cout<<"divisible"<<endl;
    }
    return 0;
}