#include<iostream>
using namespace std;
int a[100],n;
void min_heapify(int j)
{
    int left=2*j+1;
    int right=2*j+2;
    int largest=j;
    if(left<=n && a[left]<a[largest])
    	largest=left;
    if(right<=n && a[right]<a[largest])
    	largest=right;
    if(j!=largest)
    {
    	swap(a[j],a[largest]);
    	min_heapify(largest);
    }
}
void build_minheap()
{
	for(int i=(n/2)-1;i>=0;i--)
		min_heapify(i);
}
int main()
{
	int i;
	cout<<"Enter the number of elements: ";
	cin>>n;
	cout<<"Enter the elements :";
    for(i=0;i<n;i++)
    	cin>>a[i];
    build_minheap();
    cout<<"After heapifying the elements are: "<<endl;
    for(i=0;i<n;i++)
    	cout<<a[i]<<" ";
}