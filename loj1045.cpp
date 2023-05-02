#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
double lg[N];
int main()
{
    int i,tc,a,b,digit;
    lg[0]=0;
    for(i=1;i<=N;i++)
    {
        lg[i]=lg[i-1]+log10(i);
    }
    cin>>tc;
    for(i=0;i<tc;i++)
    {
        cin>>a>>b;
        digit=lg[a]/log10(b);
        cout<<"Case "<<i+1<<": "<<digit<<endl;
    }
    return 0;
}