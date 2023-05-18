#include<iostream>
#include<string.h>
using namespace std;
int mystrster(char a[],char b[])
{
    int len1=strlen(a);
    int len2=strlen(b);
    int flag=0;
    for(int i=0;i<len1;i++)
    {
        if(a[i]==b[0])
        {
            int cnt=0;
            for(int j=i;j<i+len2;j++)
            {
                if(b[cnt++]==a[j])
                {
                    flag++;
                }
            }
            if(flag==len2)
            return i+1;
            else
            flag=0;
        }
    }
    return -1;
}
int main ()
{
    char a[500];
    char b[500];
    cin>>a>>b;
    cout<<mystrster(a,b);
    return 0;
}