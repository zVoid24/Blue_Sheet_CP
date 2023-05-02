#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,j=1;
    double r;
    cin>>tc;
    while(tc--)
    {
        cin>>r;
        cout<<fixed<<setprecision(2);
        cout<<"Case "<<j++<<": "<<(2*r*2*r)-(2*acos(0.0)*r*r)+pow(10,-9)<<endl;
    }
    return 0;
}