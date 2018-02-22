#include<stdio.h>
main()
{
    int i;
    char s[]="hello world";
    FILE *fp;
    fp=fopen("f1.txt","w");
    if(fp==NULL)
    {
        printf("file cannot open");
        exit(0);
    }
    else
        for(i=0;i<strlen(s);i++)
    {
        fputc(s[i],fp);

    }
    fclose(fp);
}
