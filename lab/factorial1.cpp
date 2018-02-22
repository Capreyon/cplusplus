#include<bits/stdc++.h>
using namespace std;
#define MAX 2000000
int multiply(int x, int a[], int length);
void factorial(int n)
{
    int a[MAX];
    a[0] = 1;
    int length = 1;
    for (int x=2; x<=n; x++)
        length = multiply(x, a,length);

    cout << "Factorial of given number is ";
    for (int i=length-1; i>=0; i--)
        cout << a[i];
}
int multiply(int x, int a[], int length)
{
    int carry = 0;
    for (int i=0; i<length; i++)
    {
        int prod = a[i] * x + carry;
        a[i] = prod % 10;
        carry  = prod/10;
    }
    while (carry)
    {
        a[length] = carry%10;
        carry = carry/10;
        length++;
    }
    return length;
}
int main()
{
    int n;
    cout<<"Enter the number whose factorial is to be found ";
    cin>>n;
    factorial(n);
    return 0;
}
