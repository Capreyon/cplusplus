#include<bits/stdc++.h>
using namespace std;
int a[100],n;
void max_heapify(int);
void build_maxheap()
{
	for(int i=(n/2)-1;i>=0;i--)
		max_heapify(i);
}
void max_heapify(int j)
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
		max_heapify(largest);
	}
	
}
int main()
{
	int i;
	cout<<"Enter the number of elements in a heap: ";
	cin>>n;
	cout<<"Enter the elements of the heap: ";
	for(i=0;i<n;i++)
		cin>>a[i];
	build_maxheap();
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";

}