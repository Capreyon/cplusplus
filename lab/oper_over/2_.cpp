#include<bits/stdc++.h>
using namespace std;
class matrix
{
private:
	int a[3][3];
public:
	void getdata();
	void display();
	void operator+(matrix m);
	void operator-(matrix m);
	void operator--(int);
	void operator++(int);
	void operator*(matrix m);
};
void matrix::getdata()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cin>>a[i][j];
	}
}
void matrix::display()
{
	cout<<"The resultant matrix is:\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}

void matrix::operator+ (matrix m)
{
	matrix c;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			c.a[i][j]=a[i][j]+m.a[i][j];
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<c.a[i][j]<<" ";
		cout<<endl;
	}
}
void matrix::operator- (matrix m)
{
	matrix c;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			c.a[i][j]=a[i][j]-m.a[i][j];
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<c.a[i][j]<<" ";
		cout<<endl;
	}
}
void matrix::operator* (matrix m)
{
	matrix c;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			c.a[i][j]=0;
			for(int k=0;k<3;k++)
				c.a[i][j]+=a[i][k]*m.a[i][j];
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<c.a[i][j]<<" ";
		cout<<endl;
	}

}


void matrix::operator++ (int)
{
	matrix c;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			c.a[i][j]=a[i][j]+1;
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<c.a[i][j]<<" ";
		cout<<endl;
	}
}
void matrix::operator-- (int)
{
	matrix c;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			c.a[i][j]=a[i][j]-1;
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<c.a[i][j]<<" ";
		cout<<endl;
	}
}
void matrix::operator/ (matrix m)
{
	matrix c;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			c.a[i][j]=a[j][i];
		}
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<c.a[i][j]<<" ";
		cout<<endl;
	}

	}
}

int main()
{
    int opt,c,opt1=1;
    matrix x,y;
    while(opt1==1 && opt!=8)
	{	
    cout<<"\n\t\t\tMain Menu\n\t1.Addition\n\t2.Subtraction\n\t3.Multiplication";
    cout<<"\n\t4.Increment\n\t5.Decrement\n\t6.Display\n\t7.transpose of a matrix\n";
    cout<<"\n\t8.Exit\n\t\tEnter your choice ";
    cin>>opt;
     switch(opt)
      {
             case 1:
                      cout<<"\nEnter the contents of matrix1:\n";
                      x.getdata();
                      cout<<"\nEnter the contents of matrix2:\n";
                      y.getdata();
                       x+y;    
                       break;
             case 2:
                      cout<<"\nEnter the contents of matrix1:\n";
                      x.getdata();
                      cout<<"\nEnter the contents of matrix2:\n";
                      y.getdata();
                       x-y;    
                      
                       break;
             case 3:  
                      cout<<"\nEnter the contents of matrix1:\n";
                      x.getdata();
                      cout<<"\nEnter the contents of matrix2:\n";
                      y.getdata();
                       x*y;     
                     break;
             case 4:
                     cout<<"Enter the elements of matrix:";
                     x.getdata();
                      x++;
                      break;
             case 5:
                     cout<<"Enter the elements of matrix:\n";
                     x.getdata();
                      x--;
                      break;
              case 6:
                     cout<<"Enter the elements of matrix:\n";
                     x.getdata();
                      x.display();
                      break;
              case 7:
                     cout<<"Enter the elements of matrix:\n";
                     x.getdata();
                      x/;
                      break;
            case 8: return 0;
			 
			 default: cout<<"Invalid choice..try again\n";
      } 
       if(opt!=6)
       {
       cout<<"\n\n\tDo you want to continue(Press 1 to continue)";
       cin>>opt1;
       }
     }

    return 0;
}
