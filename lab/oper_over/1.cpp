#include<iostream>
#include<cstring>

using namespace std;

//class definition
class my_string{
   private:
           //character array to denote string 
           char str[30];
   public:
  
          //function declarations 
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

// Function definitions of the declared functions

/*
function definition for getdata()

This functions takes a string from the user and stores it in the 
private variable "str" of the referenced object.

*/

void my_string::getdata()
{
  cout<<"\nEnter the string : ";
  cin>>str;
}


/*
function definition for display()

This functions displays the string in the private variable "str" of the referenced object.

*/
void my_string::display()
{
   cout<<"\n"<<str;
}


/*

Function definition for operator "=="

This overloads the "==" operator to copy string.

*/

void my_string::operator== (my_string str1)
{
   strcpy(str1.str,str);
   cout<<"\n\tCopied String is : "<<str1.str;
}


/*

Function definition for operator "="

This overloads the "=" operator to compare two strings for equality.

Returns: 1  if the strings are equal
         0  if the strings are unequal  
*/

int my_string::operator= (my_string str1)
{
   if(strcmp(str,str1.str)==0)
     return 1;  //strings are equal
	 
     return 0;  //strings are not equal
}


/*

Function definition for operator "+"

This overloads the "+" operator to concatenate two strings. The concatenated
string is stored in the first string.

*/

void my_string::operator+ (my_string str1)
{
   strcat(str,str1.str);
   cout<<"\n\t--String After Concat is : "<<str;
}

/*

Function definition for operator "<<"

This overloads the "<<" operator to display the contents of the my_string object.

*/


void my_string::operator<< (my_string str1)
{
   cout<<"\n\t--The string you entered is :"<<str1.str;
}


/*

Function definition for operator ">>"

This overloads the ">>" operator to reverse the given string.

*/


void my_string::operator>> (my_string str1)
{
   int i;
   cout<<"\n\t--The string after reversing is : ";
   for(i=strlen(str1.str);i>=0;i--)
     cout<<str1.str[i];
}

/*

Function definition for operator "/"

This overloads the "/" operator to find whether a given string is a substring
of the other string or not. 

Returns: 1 is the tested string is a substring of the given string.
         0 if the tested string is not a substring of the given string.
*/

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
     return 0;  //not a substring
	 
     return 1;  //it is a substring
}


/*
Function definition for palindrome()

A palindrome is a string which is same in both directions.
This function checks whether the given string is palindrome or not.

*/

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




//start of main function
int main()
{
    int opt,c,opt1=1;
	
	//object declaration
    my_string a,b;
	
    while(opt1==1 && opt!=8)
	{
	
	//displaying menu to the user
    cout<<"\n\t\t\t---Main Menu---\n\t1.Equality\n\t2.String Copy\n\t3.Concat";
    cout<<"\n\t4.Display\n\t5.Reverse\n\t6.Palindrome\n\t7.Sub String";
    cout<<"\n\t8.Exit\n\t\t--Enter your choice-->";
	
	//taking user choice
    cin>>opt;
	
	//handling user choice
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
					   
					   //using function overloading for copying string
                       a==b;
                       break;
             case 3:  
                      cout<<"\nEnter the 1st string-\n";
                      a.getdata();
                      cout<<"\nEnter the 2nd string-\n";
                      b.getdata();
					 
					 //using function overloading for concatenation
                     a+b;  
                     break;
             case 4:
                     a.getdata();
                      b<<a;
                      break;
             case 5:
                     a.getdata();
					 
					 //displaying string using "<<" operator
                      b>>a;
                      break;
             case 6:
                     a.getdata();
					 
					 //check for palindrome
                     a.palindrome();
                      break;
             case 7:
                     cout<<"\nEnter the Main string-\n";
                     a.getdata();
                     cout<<"\nEnter the other string-\n";
                     b.getdata();
					 
					 //using operator overloading for finding substring
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
 