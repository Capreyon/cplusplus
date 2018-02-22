#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned size=1LL<<31LL;
	char *str;
	str=(char *)malloc(size);
	strcpy(str,"hello");
	cout<<str;
	free(str);
	return 0;
}