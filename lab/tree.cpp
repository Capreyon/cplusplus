#include<bits/stdc++.h>

using namespace std;

struct tree
{
	int data;
	tree *rc,*lc;
};

tree *root=NULL;
int t=1;

void create(void)
{
	char ch='y';
	int a;
	while(ch!='n')
	{
		cout<<"Enter the value\n";
		cin>>a;

		tree *newn=new tree;
		newn->data=a;
		newn->rc=newn->lc=NULL;

		if(root==NULL)
		{
			root=newn;
		}
		else
		{
			tree *temp1=NULL,*temp=root;
			while(temp!=NULL)
			{
				temp1=temp;
				if(a<temp->data)
					temp=temp->lc;
				else
					temp=temp->rc;
			}

			if(temp1->data<a)
				temp1->rc=newn;
			else
				temp1->lc=newn;

		}

		cout<<"more values to be inserted?y or n\n";
		cin>>ch;

	}

}

void display(tree *r)
{
	if(r==NULL)
		return;

	display(r->lc);
	cout<<r->data<<" ";
	display(r->rc);

}

void treeform(tree *r)
{
	if(r==NULL)
	{
		return;
	}	

	t++;
	treeform(r->rc);
	if(r->lc!=NULL)
		cout<<setw(5*t-3)<<'/'<<endl;

	t--;

	cout<<setw(5*t)<<r->data<<endl;

	t++;
	if(r->rc!=NULL)
		cout<<setw(5*t-3)<<"\\"<<endl;

	treeform(r->lc);
	t--;

}

int main()
{

	cout<<"First create the tree\n";

	create();

	cout<<"Now inorder display\n";
	display(root);

	cout<<"done\n";

	cout<<"now in tree form\n";
	treeform(root);
	cout<<"treedone\n";

	return 0;
}