#include<bits/stdc++.h>
using namespace std;
#define SIZE 10
class STACK
{
	private: 
		int sta[SIZE];
		int top;
	public:
		STACK();
		int push(int);
		int pop();
		int isEmpty();
		int isFull();
		void displayItems();
};

STACK::STACK(){
	top=-1;
}

int STACK::isEmpty(){
	if(top==-1){
		return 1;
	} else {
		return 0;
	}
}

int STACK::isFull(){
	if(top==SIZE){
		return 1;
	} else {
		return 0;
	}
}

int STACK::push(int n){
	if(isFull()){
		cout<<"Stack is full"<<endl;
		return 0;
	}
	++top;
	sta[top] = n;
	return n;
}

int STACK::pop(){
	int temp;
	if(isEmpty()){
		cout<<"Stack is empty"<<endl;
		return 0;
	}
	temp = sta[top];
	--top;
	return temp;
}

void STACK::displayItems(){
	int i;
	cout<<"STACK elements are : ";
	for(i=top; i>=0; --i){
		cout<<sta[i]<<" ";
	}
	cout<<endl;
}

int main(){
	STACK stk;
	int n,choice,temp;
	cout<<"1. Push"<<endl;
	cout<<"2. Pop"<<endl;
	cout<<"3. Display"<<endl;
	cout<<"4. Exit"<<endl;
	while(1){
		cout<<"Enter choice : ";
		cin>>choice;
		switch(choice){
			case 1: cout<<"Enter element : ";
					cin>>n;
					temp = stk.push(n);
					if(temp==0){
						cout<<"\nElement not inserted\n";
					} else {
						cout<<"\nElement inserted\n";
					}
					break;

			case 2: temp = stk.pop();
					if(temp==0){
						cout<<"\nElement deleted\n";
					} else {
						cout<<"\nElement deleted\n";
					}
					break;

			case 3: stk.displayItems();
					break;

			case 4: exit(1);
		}
	}
}