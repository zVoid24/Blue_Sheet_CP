#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,tc,i,j,sum=0,k;
    string str,str2,str3;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        k=7;
        sum=0;
        scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        cin>>str2;
        for(j=0;j<8;j++)
        {
            sum+=(str2[j]-'0')*pow(2,k);
            k--;
        }
        //cout<<sum<<endl;
        if(sum==a)
        {
            k=7;
            sum=0;
            for(j=9;j<17;j++)
            {
                sum+=(str2[j]-'0')*pow(2,k);
                k--;
            }
            //cout<<sum<<endl;
            if(sum==b)
            {
                k=7;
                sum=0;
                for(j=18;j<26;j++)
                {
                    sum+=(str2[j]-'0')*pow(2,k);
                    k--;
                }
                //cout<<sum<<endl;
                if(sum==c)
                {
                    k=7;
                    sum=0;
                    for(j=27;j<35;j++)
                    {
                        sum+=(str2[j]-'0')*pow(2,k);
                        k--;
                    }
                    //cout<<sum<<endl;
                    if(sum==d)
                    cout<<"Case "<<i<<": Yes"<<endl;
                    else
                    cout<<"Case "<<i<<": No"<<endl;
                }
                else
                cout<<"Case "<<i<<": No"<<endl;
            }
            else
            cout<<"Case "<<i<<": No"<<endl;
        }
        else
        cout<<"Case "<<i<<": No"<<endl;
    }
    return 0;
}