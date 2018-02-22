#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size,i,j,k;
	cout<<"Enter the size of the array:";
	cin>>size;
	int **a=new int*[size];
	for(i=0;i<size;i++)
		a[i]=new int[size-i];
	for(i=0;i<size;i++)
	{
		cout<<"Enter elements of "<<i+1<<"th row: ";
		for(j=0;j<(size-i);j++)
			cin>>a[i][j];
	}
	int **b=new int*[size];
	for(i=0;i<size;i++)
		b[i]=new int[size];
	for(i=0;i<size;i++)
	{
		j=0;
		for(k=0;k<size;k++)
		{
			if(i>k)
				b[i][k]=0;
			else
			{
				b[i][k]=a[i][j];
				j++;
			}

		}

	}
	int **c=new int*[size];
	for(i=0;i<size;i++)
		c[i]=new int[size];
	for(i=0;i<size;i++)
	{
		j=0;
		for(k=0;k<size;k++)
		{
			if(i<k)
				c[i][k]=0;
			else
			{
				c[i][k]=a[size-1-i][j];
				j++;
			}

		}

	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			b[i][j]=b[i][j]+c[i][j];
		}
	}
    cout<<"The resultant matrix is: ";
    cout<<endl<<endl;
    for(i=0;i<size;i++)
    {
    	for(j=0;j<size;j++)
    		cout<<b[i][j]<<" ";
    	cout<<endl;
    }

}