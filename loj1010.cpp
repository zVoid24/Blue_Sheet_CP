#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,m,n,i,add;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        cin>>m>>n;
        if(m==1||n==1)
        cout<<"Case "<<i<<": "<<max(m,n)<<endl;
        else if(m>2&&n>2)
        cout<<"Case "<<i<<": "<<((m*n)+1)/2<<endl;
        else
        {
            if((m*n)%8<=4)
            add=(m*n)%8;
            else
            add=4;
            cout<<"Case "<<i<<": "<<((m*n)/8)*4+add<<endl;
        }
    }
    return 0;
}