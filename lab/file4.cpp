#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,count=0;
    char ch;
    FILE *fp;
    fp=fopen("f3.txt","r");
    if(fp==NULL)
    {
        cout<<"file cannot open";
        exit(0);
    }
    ch=fgetc(fp);
    while(!feof(fp))
    {

        if(ch=='>')
        {

             cout<<ch;
            cout<<"\n";
        }
        else if(ch==';')
        {

             cout<<ch;
            cout<<"\n";
            for(i=0;i<2*count;i++)
                cout<<" ";
        }
        else if(ch=='{')
            {
                cout<<"\n";
                for(i=0;i<2*count;i++)
                cout<<" ";
                cout<<ch;
                cout<<"\n";
                cout<<"  ";
                 count++;
            }
            else if(ch=='}')
                {
                    count--;

                    cout<<"\n";
                    for(i=0;i<2*count;i++)
                        cout<<" ";
                    cout<<ch;
                }
         else
             cout<<ch;
        ch=fgetc(fp);
    }
    fclose(fp);
}
