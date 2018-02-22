#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    char s[1000];
    FILE *fp;
    cout<<"Enter the string";
    cin>>s;
    fp=fopen("f3.txt","w");
    if(fp==NULL)
    {
        cout<<"file cannot be open";
        exit(0);
    }
    else
        for(i=0;i<strlen(s);i++)
    {
        fputc(s[i],fp);
    }
}
