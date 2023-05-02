#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>str(1000);
    string s,s2;
    int tc,i,j,k;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        str[0]="http://www.lightoj.com/";
        cout<<"Case "<<i<<":"<<endl;
        j=0;
        k=0;
        while(1)
        {
            cin>>s;
            if(s=="QUIT")
            break;
            if(s=="VISIT")
            {
                cin>>s2;
                ++j;
                k=j;
                str[j]=s2;
                cout<<s2<<endl;
            }
            else if(s=="BACK")
            {
                if(j-1<0)
                cout<<"Ignored"<<endl;
                else
                {
                    cout<<str[--j]<<endl;
                }
            }
            else if(s=="FORWARD")
            {
                if(j+1>k)
                cout<<"Ignored"<<endl;
                else
                {
                    cout<<str[++j]<<endl;
                }
            }
        }
        str.clear();
    }
    return 0;
}