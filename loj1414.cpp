#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int tc,count,j,i,fyear,lyear,fdate,ldate;
    string str,str2;
    char a;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        count=0;
        cin>>str>>fdate>>a>>fyear;
        cin>>str2>>ldate>>a>>lyear;
        if(str=="January" || str=="February")
        fyear=fyear;
        else
        fyear++;
        if(str2=="January"||(str2=="February" && ldate<29))
        lyear--;
        else 
        lyear=lyear;
        count+=(lyear/4)-((fyear-1)/4);
        count+=(lyear/400)-((fyear-1)/400);
        count-=(lyear/100)-((fyear-1)/100);
        cout<<"Case "<<i<<": "<<count<<endl;
    }
    return 0;
}