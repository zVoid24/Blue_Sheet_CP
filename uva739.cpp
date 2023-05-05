#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    char str2[5];
    int i,j,count;
    cout<<setw(13)<<"NAME"<<setw(33)<<"SOUNDEX CODE"<<endl;
    while(cin>>str)
    {
        j=1;
        str2[1]='0';
        str2[2]='0';
        str2[3]='0';
        str2[0]=str[0];
        for(i=1;i<str.length();i++)
        {
            if(j>3)
            break;
            if((str[i]=='B'&&(str[i-1]!='B'&&str[i-1]!='P'&&str[i-1]!='F'&&str[i-1]!='V'))||(str[i]=='P'&&(str[i-1]!='B'&&str[i-1]!='P'&&str[i-1]!='F'&&str[i-1]!='V'))||(str[i]=='F'&&(str[i-1]!='B'&&str[i-1]!='P'&&str[i-1]!='F'&&str[i-1]!='V'))||(str[i]=='V'&&(str[i-1]!='B'&&str[i-1]!='P'&&str[i-1]!='F'&&str[i-1]!='V')))
            {
                str2[j++]='1';
            }
            else if((str[i]=='C'&&(str[i-1]!='C'&&str[i-1]!='S'&&str[i-1]!='K'&&str[i-1]!='G'&&str[i-1]!='J'&&str[i-1]!='Q'&&str[i-1]!='X'&&str[i-1]!='Z'))||(str[i]=='S'&&(str[i-1]!='C'&&str[i-1]!='S'&&str[i-1]!='K'&&str[i-1]!='G'&&str[i-1]!='J'&&str[i-1]!='Q'&&str[i-1]!='X'&&str[i-1]!='Z'))||(str[i]=='K'&&(str[i-1]!='C'&&str[i-1]!='S'&&str[i-1]!='K'&&str[i-1]!='G'&&str[i-1]!='J'&&str[i-1]!='Q'&&str[i-1]!='X'&&str[i-1]!='Z'))||(str[i]=='G'&&(str[i-1]!='C'&&str[i-1]!='S'&&str[i-1]!='K'&&str[i-1]!='G'&&str[i-1]!='J'&&str[i-1]!='Q'&&str[i-1]!='X'&&str[i-1]!='Z'))||str[i]=='J'&&((str[i-1]!='C'&&str[i-1]!='S'&&str[i-1]!='K'&&str[i-1]!='G'&&str[i-1]!='J'&&str[i-1]!='Q'&&str[i-1]!='X'&&str[i-1]!='Z'))||(str[i]=='Q'&&(str[i-1]!='C'&&str[i-1]!='S'&&str[i-1]!='K'&&str[i-1]!='G'&&str[i-1]!='J'&&str[i-1]!='Q'&&str[i-1]!='X'&&str[i-1]!='Z'))||(str[i]=='X'&&(str[i-1]!='C'&&str[i-1]!='S'&&str[i-1]!='K'&&str[i-1]!='G'&&str[i-1]!='J'&&str[i-1]!='Q'&&str[i-1]!='X'&&str[i-1]!='Z'))||(str[i]=='Z'&&(str[i-1]!='C'&&str[i-1]!='S'&&str[i-1]!='K'&&str[i-1]!='G'&&str[i-1]!='J'&&str[i-1]!='Q'&&str[i-1]!='X'&&str[i-1]!='Z')))
            {
                str2[j++]='2';
            }
            else if((str[i]=='D'&&(str[i-1]!='D'&&str[i-1]!='T'))||(str[i]=='T'&&(str[i-1]!='D'&&str[i-1]!='T')))
            {
                str2[j++]='3';
            }
            else if((str[i]=='L'&&str[i-1]!='L'))
            {
                str2[j++]='4';
            }
            else if((str[i]=='M'&&(str[i-1]!='M'&&str[i-1]!='N'))||(str[i]=='N'&&(str[i-1]!='M'&&str[i-1]!='N')))
            {
                str2[j++]='5';
            }
            else if((str[i]=='R'&&str[i-1]!='R'))
            {
                str2[j++]='6';
            }
        }
        cout<<setw(9+str.size())<<str<<setw(26-str.size())<<str2[0]<<str2[1]<<str[2]<<str[3]<<endl;
    }
    cout<<setw(19)<<" ";
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
