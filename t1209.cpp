#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,i,b;
    long double n,a,x;
    cin>>tc;
    string str;
    for(i=0;i<tc;i++)
    {
        cin>>x;
        a=sqrt(8*x-7)*1.0;
        b=sqrt(8*x-7);
        if(a-b==0)
        str+="1 ";
        else
        str+="0 ";
    }
    cout<<str;
    return 0;
}