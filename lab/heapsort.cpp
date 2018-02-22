#include<bits/stdc++.h>
using namespace std;
int a[100];
void max_heapify(int,int);
void build_maxheap(int n)
{
	for(int i=(n/2)-1;i>=0;i--)
		max_heapify(i,n);
}

void max_heapify(int j,int n)
{
	int left=2*j+1;
	int right=2*j+2;
	int largest=j;
	if(left<=n && a[left]>a[largest])
		largest=left;
	if(right<=n && a[right]>a[largest])
		largest=right;
	if(j!=largest)
	{
		swap(a[j],a[largest]);
		max_heapify(largest,n);
	}
	
}
int main()
{
	int i,n;
	cout<<"Enter the number of elements in a heap :";
	cin>>n;
	cout<<"Enter the elements of the heap :";
	for(i=0;i<n;i++)
		cin>>a[i];
	build_maxheap(n);
	int heapsize=n-1;
	for(i=n-1;i>=1;i--)
	{
		swap(a[0],a[i]);
		//cout<<a[i];
		heapsize=heapsize-1;
		max_heapify(0,heapsize);
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";

}