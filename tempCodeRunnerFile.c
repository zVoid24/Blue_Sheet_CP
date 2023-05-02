#include<stdio.h>
#include<string.h>

int main()
{
    int tc,i,j,flag;
    char str1[120],str2[120];
    scanf("%d",&tc);
    int arr[124];
    int arr2[124];
    getchar();
    for(i=1;i<=tc;i++)
    {
        flag=0;
        for(j=0;j<123;j++)
        {
            arr[j]=0;
            arr2[j]=0;
        }
        gets(str1);
        gets(str2);
        for(j=0;str1[j];j++)
        {
            if(str1[j]>=65 && str1[j]<=90)
            str1[j]+=32;
            arr[str1[j]]++;
        }
        for(j=0;str2[j];j++)
        {
            if(str2[j]>=65 && str2[j]<=90)
            str2[j]+=32;
            arr2[str2[j]]++;
        }
        for(j=97;j<123;j++)
        {
            if(arr[j]==arr2[j])
            flag=0;
            else
            {
                flag=1;
                break;
            }
        }
        printf("Case %d: ",i);
        if(flag==0)
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}