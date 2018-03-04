#include<bits/stdc++.h>
using namespace std;
class STACK
{
	private:
		struct node{
			int data;
			struct node *next;
		};

	struct node *top;
	public:
		STACK();
		int push();
		int pop();
		int isEmpty();
		void displayItems();
};

STACK::STACK(){
	top=NULL;
}

int STACK::isEmpty(){
	if(top==NULL){
		return 1;
	} else {
		return 0;
	}
}

int STACK::push(){
	struct node *temp = new node();
	int n;
	cout<<"Enter element : ";
	cin>>n;
	temp->data = n;
	temp->next = top;
	top = temp;
	return n;
}

int STACK::pop(){
	int c;
	if(isEmpty()){
		cout<<"Stack is empty"<<endl;
		return 0;
	}
	struct node *temp = top;
	top = temp->next;
	free(temp);
	return c;
}

void STACK::displayItems(){
	struct node *temp = top;
	cout<<"STACK elements are : ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
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
			case 1: temp = stk.push();
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
			default: cout<<"choice notfound\n";
		}
	}
}