#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,k;
	int arr[100];
	cout<<"Input size of N*N matrix : "<<endl;
	cin>>n; 
	int *a = new int[n*n];
	int *b = new int[n*n];
	int *c = new int[n*n];
	int l=(n*(n+1))/2;
	cout<<"Input elements for upper triangular matrix : "<<endl;
	for(i=0; i<l; i++){
		cin>>arr[i];
	}
	k=0;
	for(i=0; i<n; i++){
		for(j=0; j<i; j++){
			a[i*n + j]=0;
		}
		for(j=i; j<n; j++){
			a[i*n + j]=arr[k];
			k++;
		}
	}

	cout<<"Input elements for upper triangular matrix : "<<endl;

	k=0;
	for(i=0; i<n; i++){
		for(j=0; j<n-i-1; j++){
			b[i*n + j]=0;
		}
		for(j=n-i-1; j<n; j++){
			b[i*n + j]=arr[k];
			k++;
		}
	}

	cout<<endl<<"Matrix A :"<<endl;

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(a[i*n + j]==0){
				cout<<"  ";
			} else {
				cout<<a[i*n + j]<<" ";
			}
		}
		cout<<endl;
	}
	
	cout<<endl<<"Matrix B :"<<endl;

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(b[i*n + j]==0){
				cout<<"  ";
			} else {
				cout<<b[i*n + j]<<" ";
			}
		}
		cout<<endl;
	}

	for(i=0; i<n; i++){
		for(j=0;j<n; j++){
			c[i*n + j]=a[i*n + j]+b[i*n + j];
		}
	}

	cout<<endl<<"Addition of Matrix A and Matrix B :"<<endl;

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(c[i*n + j]==0){
				cout<<"  ";
			} else {
				cout<<c[i*n + j]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
