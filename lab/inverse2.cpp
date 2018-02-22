#include<iostream>
#include<math.h>
using namespace std;

int getminor(float **arc,float **dest,int row,int col,int order)
{
int colcount=0,rowcount=0;
for(int i=0;i<order;i++)
{
if(i!=row)
{
colcount=0;
for(int j=0;j<order;j++)
{
if(j!=col)
{
dest[rowcount][colcount]=arc[i][j];
colcount++;
}
}
rowcount++;
}
}
return 1;
}
double calcdeterminant(float **mat,int order)
{
if(order==1)
return mat[0][0];
float det=0;
float **minor;
minor=new float*[order-1];
for(int i=0;i<order-1;i++)
minor[i]=new float[order-1];
for(int i=0;i<order;i++)
{
getminor(mat,minor,0,i,order);
det+=(i%2==1?-1:1.0)*mat[0][i]*calcdeterminant(minor,order-1);
}
for(int i=0;i<order-1;i++)
delete []minor[i];
delete []minor;
return det;
}
void matrixinversion(float **A,int order,float **y)
{
double det=1.0/calcdeterminant(A,order);
float *temp=new float[(order-1)*(order-1)];
float **minor=new float*[order-1];
for(int i=0;i<order-1;i++)
minor[i]=temp+(i*(order-1));
for(int j=0;j<order;j++)
{
for(int i=0;i<order;i++)
{
getminor(A,minor,j,i,order);
y[i][j]=det*calcdeterminant(minor,order-1);
if((i+j)%2==1)
y[i][j]=-y[i][j];
}
}
delete []temp;
delete []minor;
}


int main()
{
double beta=180.0;
double aa=1.0/beta;
float cov[4][4]={{2.0,3.0,5.0,7.0},{1.0,1.0,1.0,1.0},{5.0,1.2,3.5,3.1},{6.0,3.2,4.1,2.1}};
float **cov1=new float*[4];
for(int p=0;p<4;p++)
cov1[p]=new float[4];
for(int i=0;i<4;i++)
for(int j=0;j<4;j++)
cov1[i][j]=cov[i][j];
for(int i=0;i<4;i++)
{
for(int j=0;j<4;j++)
cout<<cov1[i][j]<<" ";
cout<<endl;
}
float **res=new float*[4];
for(int p=0;p<4;p++)
res[p]=new float[4];
matrixinversion(cov1,4,res);
for(int i=0;i<4;i++)
{
for(int j=0;j<4;j++)
cout<<res[i][j]<<" ";
cout<<endl;
}
for(int i=0;i<4;i++)
delete []cov1[i];
delete cov1;
for(int i=0;i<4;i++)
delete []res[i];
delete []res;
return 0;
}
