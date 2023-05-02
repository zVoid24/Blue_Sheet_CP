#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,fact=1,len;
    string str;
    cin>>n>>str;
    len=str.length();
    for(int i=n;i>=1;i-=len)
    {
        fact*=i;
    }
    cout<<fact<<endl;
    return 0;
}