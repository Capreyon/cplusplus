#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{

  int result;
  for(int i=1;i<=30;i++)
{

 result=(20-i/(1.5))*sin(i/5.0);
 if(result>=0)
{
cout<<setw(40);
cout<<"||";
for(int i=0;i<result;i++)
cout<<'-';
//cout << setw(result)<<setfill('-');
cout <<'*'<<endl;
}
  else
{
if(result==-1)
cout<<setw(39+result)<<'*';
else{
cout<<setw(40+result)<<'*';
for(int i=0;i<(-1)*result-2;i++)
cout<<'-';}
cout<<"||"<<endl;
}
}
  return 0;
}

