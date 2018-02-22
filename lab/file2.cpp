#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    char s[100];
    FILE *fp;
    cin>>s;
    fp=fopen("f2.txt","r");
    if(fp==NULL)
    {
        cout<<"file cannot open";
        exit(0);
    }
    else
    {
        for(i=0;i<strlen(s);i++)
            fputc(s[i],fp);
    }
    fclose(fp);
}
