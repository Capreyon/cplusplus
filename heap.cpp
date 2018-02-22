#include<bits/stdc++.h>
using namespace std;
int main()
{
	struct node{
		int data;
		struct node* link1;
		struct node* link2;
	};
	struct node* newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=data;
	newNode->link=NULL;
	return newNode;
}