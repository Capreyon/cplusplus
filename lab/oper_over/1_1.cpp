#include<bits/stdc++.h>

using namespace std;

class my_string{
   private:
           
           char str[30];
   public:
   
          void getdata();
          void display();
          void operator== (my_string str1);
          int operator= (my_string str1);
          void operator+ (my_string str1);
          void operator<< (my_string str1);
          void operator>> (my_string str1);
          int operator/ (my_string str1);
          void palindrome();
};



void my_string::getdata()
{
  cout<<"\nEnter the string : ";
  cin>>str;
}

void my_string::display()
{
   cout<<"\n"<<str;
}

void my_string::operator== (my_string str1)
{
   strcpy(str1.str,str);
   cout<<"\n\tCopied String is : "<<str1.str;
}


int my_string::operator= (my_string str1)
{
   if(strcmp(str,str1.str)==0)
     return 1;  
	 
     return 0;
}


void my_string::operator+ (my_string str1)
{
   strcat(str,str1.str);
   cout<<"\n\t--String After Concat is : "<<str;
}


void my_string::operator<< (my_string str1)
{
   cout<<"\n\t--The string you entered is :"<<str1.str;
}





void my_string::operator>> (my_string str1)
{
   int i;
   cout<<"\n\t--The string after reversing is : ";
   for(i=strlen(str1.str);i>=0;i--)
     cout<<str1.str[i];
}

int my_string::operator/ (my_string str1)
{
   int flag=0,k,i,j,len=strlen(str),len1=strlen(str1.str)-1;
   for(i=0;i<len;i++)
    {
      if(str[i]==str1.str[0])
       {
        if(str[i+len1]==str1.str[len1])
          {
           for(j=i,k=0;j<i+len1+1,k<len1;j++,k++)
             {
              if(str[j]==str1.str[k])
                flag=1;
              else
                { 
                  flag=0;
                  break;
                } 
              }
           }
        }
    }
   if(flag==0)
     return 0;  
     return 1;  
}

void my_string::palindrome()
{
  int i,j,flag=0;
   for(i=0,j=strlen(str)-1;i<=strlen(str),j>=0;j--,i++)
    {
     if(str[i]!=str[j])
       {
         flag=1;
         cout<<"\n\t--Not a palindrome--";
         break;
      }
       else
          flag=0;
    }
     if(flag==0)
        cout<<"\n\t--Palindrome--";
}



int main()
{
    int opt,c,opt1=1;
	
    my_string a,b;
	
    while(opt1==1 && opt!=8)
	{
	
    cout<<"\n\t1.check equality of string\n\t2.Copied String\n\t3.String Concatenation";
    cout<<"\n\t4.Display\n\t5.Reverse the string\n\t6.Palindrome\n\t7.Sub String";
    cout<<"\n\t8.Exit\n\t\t--Enter your choice-->";
	
    cin>>opt;
	
     switch(opt)
      {
             case 1:
                      cout<<"\nEnter the 1st string-\n";
                      a.getdata();
                      cout<<"\nEnter the 2nd string-\n";
                      b.getdata();
                       c=a=b;
                       if(c==1)
                           cout<<"\n\t---Strings are Equal---\n";
                       else
                           cout<<"\n\t---Strings are not Equal---\n";
                       break;
             case 2:
                       a.getdata();
                       a==b;
                       break;
             case 3:  
                      cout<<"\nEnter the 1st string-\n";
                      a.getdata();
                      cout<<"\nEnter the 2nd string-\n";
                      b.getdata();
                     a+b;  
                     break;
             case 4:
                     a.getdata();
                      b<<a;
                      break;
             case 5:
                     a.getdata();
                      b>>a;
                      break;
             case 6:
                     a.getdata();
                     a.palindrome();
                      break;
             case 7:
                     cout<<"\nEnter the Main string-\n";
                     a.getdata();
                     cout<<"\nEnter the other string-\n";
                     b.getdata();
                      c=a/b;
                       if(c==1)
                           cout<<"\n\t---Substring---\n";
                       else
                           cout<<"\n\t---Not a substring---\n";

                     break;
            case 8: return 0;
			 
			 default: cout<<"Invalid choice..try again\n";
      } 
       if(opt!=8){
       cout<<"\n\n\tDo you want to continue(Press 1 to continue)";
       cin>>opt1;}
     }

    return 0;
}
 