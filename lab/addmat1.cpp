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
	cout<<"Input elements : "<<endl;
	for(i=0; i<n; i++){
		for(j=i;j<n;j++)
			cin>>a[i][j];	
	}
	for(i=0; i<n; i++){
		for(j=0; j<i; j++){
			a[i*n + j]=0;
		}
		k=i;
		for(j=i; j<n; j++){
			a[i*n + j]=arr[k];
			k++;
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<n-i-1; j++){
			b[i*n + j]=0;
		}
		k=j;
		for(j=n-i-1; j<n; j++){
			b[i*n + j]=arr[k];
			k++;
		}
	}

	cout<<endl<<"Matrix A :"<<endl;

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			cout<<a[i*n + j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl<<"Matrix B :"<<endl;

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			cout<<b[i*n + j]<<" ";
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
			cout<<c[i*n + j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}