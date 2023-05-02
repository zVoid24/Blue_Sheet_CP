#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    string str;
    cin>>tc;
    while(tc--)
    {
        cin>>str;
        if(str[0]=='h')
        str[0]='a';
        else if(str[0]=='g')
        str[0]='b';
        else if(str[0]=='f')
        str[0]='c';
        else if(str[0]=='e')
        str[0]='d';
        if(str[1]=='8')
        str[1]='1';
        else if(str[1]=='7')
        str[1]='2';
        else if(str[1]=='6')
        str[1]='3';
        else if(str[1]=='5')
        str[1]='4';
        if(str=="a1")
        cout<<"2\n";
        else if(str=="b1"||str=="a2")
        cout<<"3\n";
        else if(str=="a4"||str=="a3"||str=="b2"||str=="c1"||str=="d1")
        cout<<"4\n";
        else if(str=="b4"||str=="b3"||str=="d2"||str=="c2")
        cout<<"6\n";
        else
        cout<<"8\n";
    }
    return 0;
}