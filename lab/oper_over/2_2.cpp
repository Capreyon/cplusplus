#include<bits/stdc++.h>
using namespace std;
class Matrix
{
 private:
  int rows;
  int cols;
  int **Mat;
  int a[rows][cols];


  public:
    void getdata();
    Matrix (const int &rows,const int &cols);
    Matrix(const Matrix &other);
    ~Matrix ();
    int* & operator[](const int &index) const ;
    void operator=(const Matrix &other );
    Matrix  operator -()const;
    Matrix  operator -(const Matrix &other)const;
    Matrix  operator +(const Matrix &other)const ;
    Matrix  operator *(const Matrix &other)const;
    Matrix  operator *(const int &num)const;
    int getMatrixRows(const Matrix &other){return other.rows;}
    int getMatrixCols(const Matrix &other){return other.cols;}

    friend  Matrix operator *(const int & num,const Matrix &m)
    {
     return (m*num);
    }


    friend Matrix operator +(const int &num,const Matrix &t)
    {
     return (num+t);
    }




    friend std::ostream &operator<<(std::ostream &os, const Matrix &m) {
    for (int i=0; i < m.rows; ++i) {
        for (int j=0; j < m.cols; ++j) {
            os << m.Mat[i][j] << "  " ;
        }
        os << '\n';
    }
    return os;
}


};


Matrix::Matrix(const int &n_rows,const int &n_cols )//constructor of class Matrix
{
    rows=n_rows; 
    cols=n_cols;
    Mat=new int* [cols];
    assert(Mat);
    for(int i =0;i<rows;i++)
    {
       Mat[i]=new int[cols];
       assert(Mat[i]);
    }
    for(int i=0;i<rows;i++)
      for(int j=0;j<cols;j++)
        Mat[i][j]=0;            
}




 Matrix::Matrix(const Matrix &other)  //copy constructor
{
    cols=other.cols;
    rows=other.rows;
    Mat=new int* [other.rows];
    assert(Mat);
    for(int i =0;i<other.rows;i++)
    {
       Mat[i]=new int[other.cols];
       assert(Mat[i]);
    }
    for(int i=0;i<other.rows;i++)
      for(int j=0;j<other.cols;j++)
            Mat[i][j]=other[i][j];
}

int my_string::getdata()
{
  cout<<"Enter the value of rows & columns";
  int r,c;
  cin>>r>>c;
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      cin>>a[r][c];
    }
  }
}



int* & Matrix::operator [](const int &index) const  // overloading operator []
{
  return  Mat [index];
}



void Matrix::operator=(const Matrix &other )   // overloading operator =
{
    if(Mat !=other.Mat && cols==other.cols && rows==other.rows)
     {
       for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            Mat[i][j]=other.Mat[i][j];
     }
     return 1;
     else 
      return 0;
}





 Matrix  Matrix::operator-()const   // overloading operator -
{
    Matrix temp(rows,cols); 
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            temp.Mat[i][j]=Mat[i][j]*-1;
   return temp;
}


 Matrix  Matrix::operator +(const Matrix &other)const  //add 2 matrix
{
    Matrix temp(rows,cols);  
    if (rows!=other.rows ||cols!=other.cols)
    {
       for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            temp.Mat[i][j]=Mat[i][j];
       return temp;
    }
    else
     {      
         for(int i=0;i<rows;i++)
             for(int j=0;j<cols;j++)
                 temp.Mat[i][j]+=other.Mat[i][j]+Mat[i][j];
     }
    return temp; 
}





Matrix  Matrix::operator *(const Matrix &other)const   //multiplay matrix on the right
{
    if (cols!=other.rows)
    {
      Matrix temp(cols,rows);
      for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            temp.Mat[i][j]=Mat[i][j];
      return temp;
    }
    else
    {
      Matrix temp(cols,other.rows);  
      for(int i=0;i<rows;i++)
          for(int j=0;j<other.cols;j++)
            for(int k =0;k<cols;k++)
                temp[i][j]+=Mat[i][k]*other.Mat[i][j];
      return temp;          
    }

}




Matrix  Matrix::operator *(const int &num)const   //multiply with number
{
    Matrix temp(rows,cols);
    for(int i=0;i<rows;i++)
       for(int j=0;j<cols;j++)
            temp.Mat[i][j]=Mat[i][j]*num;
    return temp; 
}

Matrix  Matrix::operator -(const Matrix &other)const //matrix subtraction 
{
    Matrix temp(rows,cols);  
    if (rows!=other.rows ||cols!=other.cols)
    {
       for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            temp.Mat[i][j]=Mat[i][j];
       return temp;
    }
    else
     {

         for(int i=0;i<rows;i++)
             for(int j=0;j<cols;j++)
                 temp.Mat[i][j]+=Mat[i][j]-other.Mat[i][j];
     }
    return temp;
}




Matrix::~Matrix ()//destrucor 
{
 for(int i =0;i<rows;i++)
   delete [] Mat[i]; 
 delete [] Mat;

}




int main()
{
    int opt,c,opt1=1;
  
    Matrix m,n;
  
    while(opt1==1 && opt!=8)
  {
  
    cout<<"\n\t\t\t---Main Menu---\n\t1.Equality\n\t2.String Copy\n\t3.Concat";
    cout<<"\n\t4.Display\n\t5.Reverse\n\t6.Palindrome\n\t7.Sub String";
    cout<<"\n\t8.Exit\n\t\t--Enter your choice-->";
  
    cin>>opt;
  
     switch(opt)
      {
             case 1:
                      cout<<"\nEnter the 1st matrix-\n";
                      m.getdata();
                      cout<<"\nEnter the 2nd matrix-\n";
                      n.getdata();
                       c=m=n;
                       if(c==1)
                           cout<<"\n\t---Matrices are Equal---\n";
                       else
                           cout<<"\n\t---Matrices are not Equal---\n";
                       break;
             /*case 2:
                      a.getdata();
                      a==b;
                       break;
             case 3:  
                      cout<<"\nEnter the 1st string-\n";
                      a.getdata();
                      cout<<"\nEnter the 2nd string-\n";
                      b.getdata();
                     a+b;  
                     break;
             case 4:
                     a.getdata();
                      b<<a;
                      break;
             case 5:
                     a.getdata();
                      b>>a;
                      break;
             case 6:
                     a.getdata();
                     a.palindrome();
                      break;
             case 7:
                     cout<<"\nEnter the Main string-\n";
                     a.getdata();
                     cout<<"\nEnter the other string-\n";
                     b.getdata();
                      c=a/b;
                       if(c==1)
                           cout<<"\n\t---Substring---\n";
                       else
                           cout<<"\n\t---Not a substring---\n";

                     break;*/
            case 8: return 0;
       
       default: cout<<"Invalid choice..try again\n";
      } 
       if(opt!=8){
       cout<<"\n\n\tDo you want to continue(Press 1 to continue)";
       cin>>opt1;}
     }

    return 0;
}
 