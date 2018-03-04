#include<bits/stdc++.h>
using namespace std;


class QUEUE
{
	private:
		struct node{
	int data;
	struct node *next;
};
		struct node *front;
		struct node *rear;
	public:
		QUEUE();
		int enqueue();
		int dequeue();
		int isEmpty();
		void displayItems();
};

QUEUE::QUEUE(){
	front = NULL;
	rear = NULL;
}

int QUEUE::isEmpty(){
	if(front==NULL && rear==NULL){
cout<<"underflow';
		return 1;
	} else {
		return 0;
	}
}

int QUEUE::enqueue(){
	struct node *temp = new node();
	int n;
	cout<<"Enter element : ";
	cin>>n;
	temp->data = n;
	temp->next = front;
	front = temp;
	return n;
}

int QUEUE::dequeue(){
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
	cout<<"1. Enqueue"<<endl;
	cout<<"2. Dequeue"<<endl;
	cout<<"3. Display"<<endl;
	cout<<"4. Exit"<<endl;
	while(1){
		cout<<"\nEnter choice : ";
		cin>>choice;
		switch(choice){
			case 1: temp = stk.enqueue();
					if(temp==0){
						cout<<"\nElement not inserted\n";
					} else {
						cout<<temp<<" inserted\n";
					}
					break;

			case 2: temp = stk.dequeue();
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
