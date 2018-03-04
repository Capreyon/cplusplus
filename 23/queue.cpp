#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};

class QUEUE
{
	private:
		struct node *front;
		struct node *rear;
	public:
		QUEUE();
		int push();
		int pop();
		int isEmpty();
		void displayItems();
};

QUEUE::QUEUE(){
	front = NULL;
	rear = NULL;
}

int QUEUE::isEmpty(){
	if(front==NULL && rear==NULL){
		return 1;
	} else {
		return 0;
	}
}

int QUEUE::push(){
	struct node *temp = new node();
	if(temp==NULL){
		cout<<"Cannot Insert\n";
		return 0;
	}
	int n;
	cout<<"Enter element : ";
	cin>>n;
	temp->data = n;
	temp->next = NULL;
	if(front == NULL){
		front=rear=temp;
	}
	front = temp;
	return n;
}

int QUEUE::pop(){
	int c;
	if(isEmpty()){
		cout<<"Stack is empty"<<endl;
		return 0;
	}
	struct node *temp = front;
	struct node *prev;
	while(temp->next!=NULL){
		prev = temp;
		temp = temp->next;
	}
	c=temp->data;
	prev->next = NULL;
	free(temp);
	return c;
}

void QUEUE::displayItems(){
	struct node *temp = front;
	cout<<"QUEUE elements are : ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

int main(){
	QUEUE stk;
	int n,choice,temp;
	cout<<"1. Push"<<endl;
	cout<<"2. Pop"<<endl;
	cout<<"3. Display"<<endl;
	cout<<"4. Exit"<<endl;
	while(1){
		cout<<"\nEnter choice : ";
		cin>>choice;
		switch(choice){
			case 1: temp = stk.push();
					if(temp==0){
						cout<<"\nElement not inserted\n";
					} else {
						cout<<temp<<" inserted\n";
					}
					break;

			case 2: temp = stk.pop();
					if(temp==0){
						cout<<"\nElement not deleted\n";
					} else {
						cout<<temp<<" deleted\n";
					}
					break;

			case 3: stk.displayItems();
					break;

			case 4: exit(1);
		}
	}
}